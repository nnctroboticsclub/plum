#include "platforms/mbed/time.h"

#include <HighResClock.h>

namespace plum::platform::mbed {

float Time::NowSeconds() const {
  return static_cast<float>(Now().count()) / 1000.0f;
}

std::chrono::milliseconds Time::Now() const {
  return std::chrono::duration_cast<std::chrono::milliseconds>(
      ::mbed::HighResClock::now().time_since_epoch());
}

}  // namespace plum::platform::mbed
