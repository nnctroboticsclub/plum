#include "platforms/simulator/digital_out.h"

#include "logger.h"

#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

DigitalOut::DigitalOut(interface::PinName pin) {
  (void)pin;
  Logger::Info("DigitalOut", "Initialized on pin: %03d", pin);
}

void DigitalOut::Write(bool value) {
  value_ = value;
  Logger::Value("DigitalOut::Write", "Value: %1d", value_);
}

void DigitalOut::Toggle() {
  value_ = !value_;
  Logger::Value("DigitalOut::Toggle", "Value: %1d", value_);
}

bool DigitalOut::Read() {
  return value_;
}

}  // namespace plum::platform::simulator
