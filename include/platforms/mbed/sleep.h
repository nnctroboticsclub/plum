#pragma once

#include <ThisThread.h>

#include "interfaces/sleep.h"

namespace plum::platform::mbed {

class Sleep final : public interface::Sleep {
 public:
  void SleepFor(std::chrono::milliseconds duration) override;
};

}  // namespace plum::platform::mbed
