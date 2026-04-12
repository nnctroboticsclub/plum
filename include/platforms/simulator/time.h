#pragma once

#include <chrono>

#include "interfaces/time.h"

namespace plum::platform::simulator {

class Time final : public interface::Time {
 public:
  [[nodiscard]] float NowSeconds() const override;
  [[nodiscard]] std::chrono::milliseconds Now() const override;
};

}  // namespace plum::platform::simulator
