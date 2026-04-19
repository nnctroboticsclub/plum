#pragma once

#include "interfaces/can.h"
#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

class Can final : public interface::Can {
 public:
  Can(interface::PinName rx_pin, interface::PinName tx_pin);

  bool Send(const interface::CanMessage& msg) override;
  bool Receive(interface::CanMessage& msg) override;

  bool SetFilter(
      uint32_t filter_id, uint32_t mask,
      interface::CanFrameType frame_type = interface::kCanAny) override;

  [[nodiscard]] int GetSendError() override;
  [[nodiscard]] int GetReceiveError() override;
};

}  // namespace plum::platform::simulator
