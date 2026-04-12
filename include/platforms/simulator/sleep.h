#pragma once

#include <chrono>

#include "interfaces/sleep.h"

namespace plum::platform::simulator {

class Sleep : public interface::Sleep {
 public:
  void SleepFor(std::chrono::milliseconds duration) override;
};

}  // namespace plum::platform::simulator
