#pragma once

#include <chrono>

namespace plum::interface {

class Time {
 public:
  Time() = default;
  virtual ~Time() = default;
  Time(const Time&) = delete;
  Time& operator=(const Time&) = delete;
  Time(Time&&) = delete;
  Time& operator=(Time&&) = delete;

  [[nodiscard]] virtual float NowSeconds() const = 0;
  [[nodiscard]] virtual std::chrono::milliseconds Now() const = 0;
};

}  // namespace plum::interface
