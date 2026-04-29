#include "platforms/mbed/pwm_out.h"

#include <PinNames.h>

#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

PwmOut::PwmOut(interface::PinName pin) : pwm_out_(static_cast<::PinName>(pin)) {
}

void PwmOut::Write(float duty_cycle) {
  pwm_out_.write(duty_cycle);
}

void PwmOut::SetPulseWidth(float seconds) {
  pwm_out_.pulsewidth(seconds);
}

float PwmOut::Read() {
  return pwm_out_.read();
}

float PwmOut::GetPulseWidth() {
  return static_cast<float>(pwm_out_.read_pulsewidth_us()) / 1'000'000.0f;
}

void PwmOut::SetPeriod(float seconds) {
  pwm_out_.period(seconds);
}

void PwmOut::SetFrequency(float frequency) {
  pwm_out_.period(1.0f / frequency);
}

};  // namespace plum::platform::mbed
