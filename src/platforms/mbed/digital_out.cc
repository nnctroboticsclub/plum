#include "platforms/mbed/digital_out.h"

#include <PinNames.h>

#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

DigitalOut::DigitalOut(interface::PinName pin)
    : digital_out_(static_cast<::PinName>(pin)) {
}

void DigitalOut::Write(bool value) {
  digital_out_.write(value);
}

void DigitalOut::Toggle() {
  digital_out_.write(!digital_out_.read());
}

bool DigitalOut::Read() {
  return digital_out_.read() == 1;
}

}  // namespace plum::platform::mbed
