#pragma once

#include <functional>

namespace plum::interface {

class Thread {
 public:
  Thread() = default;
  virtual ~Thread() = default;
  Thread(const Thread&) = delete;
  Thread& operator=(const Thread&) = delete;
  Thread(Thread&&) = delete;
  Thread& operator=(Thread&&) = delete;

  virtual void Start(std::function<void()>& task) = 0;
  virtual void Join() = 0;
};

}  // namespace plum::interface
