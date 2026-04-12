#include "platforms/mbed/digital_in.h"

#include <PinNames.h>

#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

DigitalIn::DigitalIn(interface::PinName pin)
    : digital_in_(static_cast<::PinName>(pin)) {
}

bool DigitalIn::Read() {
  return digital_in_.read();
}

}  // namespace plum::platform::mbed
