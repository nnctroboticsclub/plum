#pragma once

#include "interfaces/digital_in.h"
#include "interfaces/pin_names.h"

namespace plum::platform::simulator {

class DigitalIn final : public interface::DigitalIn {
 public:
  explicit DigitalIn(interface::PinName pin);

  [[nodiscard]] bool Read() override;

 private:
  bool value_ = false;
};

}  // namespace plum::platform::simulator
