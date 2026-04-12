#pragma once

#include <chrono>

namespace plum::interface {

class Sleep {
 public:
  Sleep() = default;
  virtual ~Sleep() = default;
  Sleep(const Sleep&) = delete;
  Sleep& operator=(const Sleep&) = delete;
  Sleep(Sleep&&) = delete;
  Sleep& operator=(Sleep&&) = delete;

  virtual void SleepFor(std::chrono::milliseconds duration) = 0;
};

}  // namespace plum::interface
