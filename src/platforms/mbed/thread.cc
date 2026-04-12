#include "platforms/mbed/thread.h"

#include <Callback.h>

namespace plum::platform::mbed {

void Thread::Start(std::function<void()>& task) {
  task_ = task;
  thread_.start(::mbed::callback(this, &Thread::RunTask));
}

void Thread::Join() {
  thread_.join();
}

void Thread::RunTask() {
  if (task_) {
    task_();
  }
}

}  // namespace plum::platform::mbed
