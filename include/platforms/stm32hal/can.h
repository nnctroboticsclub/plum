#pragma once

#if __has_include(<stm32f3xx_hal.h>)
#include <stm32f3xx_hal.h>
#elif __has_include(<stm32f4xx_hal.h>)
#include <stm32f4xx_hal.h>
#elif __has_include(<stm32f7xx_hal.h>)
#include <stm32f7xx_hal.h>
#else
#error "Unsupported STM32 series"
#endif

#include "interfaces/can.h"
#include "interfaces/pin_names.h"

namespace plum::platform::stm32hal {

class Can final : public interface::Can {
 public:
  Can(interface::PinName rx_pin, interface::PinName tx_pin);

  bool Send(const interface::CanMessage& msg) override;
  bool Receive(interface::CanMessage& msg) override;

  bool SetFilter(uint32_t filter_id, uint32_t mask) override;

  [[nodiscard]] int GetSendError() override;
  [[nodiscard]] int GetReceiveError() override;

 private:
  CAN_HandleTypeDef hcan_;
};

}  // namespace plum::platform::stm32hal
