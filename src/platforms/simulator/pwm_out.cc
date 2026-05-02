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

void PwmOut::SetPulseWidth(float seconds) {
  pulse_width_us_ = static_cast<int>(seconds * 1'000'000);
  Logger::Value("PwmOut::SetPulseWidth", "Pulse Width: %.3f seconds (%.0f us)",
                seconds, static_cast<float>(pulse_width_us_));
}

void PwmOut::SetPulseWidthUs(int microseconds) {
  pulse_width_us_ = microseconds;
  Logger::Value("PwmOut::SetPulseWidthUs", "Pulse Width: %d us (%.3f seconds)",
                pulse_width_us_,
                static_cast<float>(pulse_width_us_) / 1'000'000.0f);
}

float PwmOut::Read() {
  return value_;
}

float PwmOut::GetPulseWidth() {
  return static_cast<float>(pulse_width_us_) / 1'000'000.0f;
}

int PwmOut::GetPulseWidthUs() {
  return pulse_width_us_;
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
