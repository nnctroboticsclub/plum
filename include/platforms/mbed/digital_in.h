#pragma once

#include <DigitalIn.h>

#include "interfaces/digital_in.h"
#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

class DigitalIn final : public interface::DigitalIn {
 public:
  explicit DigitalIn(interface::PinName pin);

  [[nodiscard]] bool Read() override;

 private:
  ::mbed::DigitalIn digital_in_;
};

}  // namespace plum::platform::mbed
