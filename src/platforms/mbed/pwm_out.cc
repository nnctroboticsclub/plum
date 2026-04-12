#include "platforms/mbed/pwm_out.h"

#include <PinNames.h>

#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

PwmOut::PwmOut(interface::PinName pin) : pwm_out_(static_cast<::PinName>(pin)) {
}

void PwmOut::Write(float duty_cycle) {
  pwm_out_.write(duty_cycle);
}

float PwmOut::Read() {
  return pwm_out_.read();
}

void PwmOut::SetPeriod(float seconds) {
  pwm_out_.period(seconds);
}

void PwmOut::SetFrequency(float frequency) {
  pwm_out_.period(1.0f / frequency);
}

};  // namespace plum::platform::mbed
