#include "platforms/simulator/pwm_out.h"

#include "logger.h"

#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

PwmOut::PwmOut(interface::PinName pin) {
  (void)pin;
  Logger::Info("PwmOut", "Initialized on pin: %03d", pin);
}

void PwmOut::Write(float value) {
  value_ = value;
  Logger::Value("PwmOut::Write", "Value: %.3f", value_);
}

float PwmOut::Read() {
  return value_;
}

void PwmOut::SetPeriod(float seconds) {
  period_ = seconds;
  Logger::Value("PwmOut::SetPeriod", "Period: %.3f seconds", period_);
}

void PwmOut::SetFrequency(float frequency) {
  period_ = 1.0f / frequency;
  Logger::Value("PwmOut::SetFrequency",
                "Frequency: %.3f Hz, Period: %.3f seconds", frequency, period_);
}

}  // namespace plum::platform::simulator
