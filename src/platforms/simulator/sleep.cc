#include "platforms/simulator/sleep.h"

#include <chrono>
#include <thread>

namespace plum::platform::simulator {

void Sleep::SleepFor(std::chrono::milliseconds duration) {
  std::this_thread::sleep_for(duration);
}

}  // namespace plum::platform::simulator
