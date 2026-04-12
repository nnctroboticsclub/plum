#include "platforms/mbed/can.h"

#include <cstddef>

#include <InterfaceCAN.h>
#include <PinNames.h>

#include "interfaces/can.h"
#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

Can::Can(interface::PinName rx_pin, interface::PinName tx_pin)
    : can_(static_cast<::PinName>(rx_pin), static_cast<::PinName>(tx_pin),
           1000000) {
}

bool Can::Send(const interface::CanMessage& msg) {
  if (msg.length < 1 || msg.length > 8) {
    return false;
  }
  return can_.write(
      {msg.id, msg.data.data(), static_cast<uint8_t>(msg.length)});
}

bool Can::Receive(interface::CanMessage& msg) {
  ::mbed::CANMessage temp_msg;
  if (can_.read(temp_msg)) {
    msg.id = temp_msg.id;
    msg.length = temp_msg.len;
    for (size_t i = 0; i < msg.length; i++) {
      msg.data[i] = temp_msg.data[i];
    }
    return true;
  }
  return false;
}

bool Can::SetFilter(uint32_t filter_id, uint32_t mask) {
  return can_.filter(filter_id, mask, CANStandard) == 1;
}

int Can::GetSendError() {
  return can_.tderror();
}

int Can::GetReceiveError() {
  return can_.rderror();
}

}  // namespace plum::platform::mbed
