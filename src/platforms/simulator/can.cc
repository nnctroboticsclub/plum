#include "platforms/simulator/can.h"

#include "logger.h"

#include "interfaces/can.h"
#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

Can::Can(interface::PinName rx_pin, interface::PinName tx_pin) {
  (void)rx_pin;
  (void)tx_pin;
  Logger::Info("Can", "Initialized with RX pin: %03d, TX pin: %03d", rx_pin,
               tx_pin);
}

bool Can::Send(const interface::CanMessage& msg) {
  Logger::Value("Can::Send",
                "ID: 0x%03X, Data: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x "
                "0x%02x 0x%02x, Length: %d, FrameType: %d",
                msg.id, msg.data[0], msg.data[1], msg.data[2], msg.data[3],
                msg.data[4], msg.data[5], msg.data[6], msg.data[7], msg.length,
                msg.frame_type);
  return true;
}

bool Can::Receive(interface::CanMessage& msg) {
  (void)msg;
  return true;
}

bool Can::SetFilter(uint32_t filter_id, uint32_t mask,
                    interface::CanFrameType frame_type) {
  Logger::Value("Can::SetFilter", "ID: 0x%03X, Mask: 0x%03X, Type: %d",
                filter_id, mask, frame_type);
  return true;
}

int Can::GetSendError() {
  return 0;
}

int Can::GetReceiveError() {
  return 0;
}

}  // namespace plum::platform::simulator
