#pragma once

#include <PwmOut.h>

#include "interfaces/pin_names.h"
#include "interfaces/pwm_out.h"

namespace plum::platform::mbed {

class PwmOut final : public interface::PwmOut {
 public:
  explicit PwmOut(interface::PinName pin);

  void Write(float duty_cycle) override;
  [[nodiscard]] float Read() override;

  void SetPeriod(float seconds) override;
  void SetFrequency(float frequency) override;

 private:
  ::mbed::PwmOut pwm_out_;
};

}  // namespace plum::platform::mbed
