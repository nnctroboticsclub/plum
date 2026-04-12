#pragma once

#include <Thread.h>
#include <functional>

#include "interfaces/thread.h"

namespace plum::platform::mbed {

class Thread final : public interface::Thread {
 public:
  void Start(std::function<void()>& task) override;
  void Join() override;

 private:
  void RunTask();

  ::rtos::Thread thread_;
  std::function<void()> task_;
};

}  // namespace plum::platform::mbed
