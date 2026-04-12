#pragma once

#include <DigitalOut.h>

#include "interfaces/digital_out.h"
#include "interfaces/pin_names.h"

namespace plum::platform::mbed {

class DigitalOut final : public interface::DigitalOut {
 public:
  explicit DigitalOut(interface::PinName pin);

  void Write(bool value) override;
  void Toggle() override;
  [[nodiscard]] bool Read() override;

 private:
  ::mbed::DigitalOut digital_out_;
};

}  // namespace plum::platform::mbed
