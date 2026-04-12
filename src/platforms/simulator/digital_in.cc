#include "platforms/simulator/digital_in.h"

#include "logger.h"

#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

DigitalIn::DigitalIn(interface::PinName pin) {
  (void)pin;
  Logger::Info("DigitalIn", "Initialized on pin: %03d", pin);
}

bool DigitalIn::Read() {
  return value_;
}

}  // namespace plum::platform::simulator
