#include "platforms/mbed/sleep.h"

namespace plum::platform::mbed {

void Sleep::SleepFor(std::chrono::milliseconds duration) {
  ::rtos::ThisThread::sleep_for(duration);
}

}  // namespace plum::platform::mbed
