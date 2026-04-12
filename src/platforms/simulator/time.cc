#include "platforms/simulator/time.h"

#include <chrono>

namespace plum::platform::simulator {

float Time::NowSeconds() const {
  return static_cast<float>(Now().count()) / 1000.0f;
}

std::chrono::milliseconds Time::Now() const {
  return std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now().time_since_epoch());
}

}  // namespace plum::platform::simulator
