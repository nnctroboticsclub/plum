#pragma once

#include "interfaces/digital_out.h"
#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

class DigitalOut final : public interface::DigitalOut {
 public:
  explicit DigitalOut(interface::PinName pin);

  void Write(bool value) override;
  void Toggle() override;
  [[nodiscard]] bool Read() override;

 private:
  bool value_ = false;
};

}  // namespace plum::platform::simulator
