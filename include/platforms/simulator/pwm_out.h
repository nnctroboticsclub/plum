#pragma once

#include "interfaces/pin_names.h"
#include "interfaces/pwm_out.h"

namespace plum::platform::simulator {

class PwmOut final : public interface::PwmOut {
 public:
  explicit PwmOut(interface::PinName pin);

  void Write(float value) override;
  void SetPulseWidth(float seconds) override;

  [[nodiscard]] float Read() override;
  [[nodiscard]] float GetPulseWidth() override;

  void SetPeriod(float seconds) override;
  void SetFrequency(float frequency) override;

 private:
  float value_ = 0.0f;
  float period_ = 1.0f;  // Default period in seconds
};

}  // namespace plum::platform::simulator
