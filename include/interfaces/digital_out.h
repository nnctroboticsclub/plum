#pragma once

namespace plum::interface {

class DigitalOut {
 public:
  DigitalOut() = default;
  virtual ~DigitalOut() = default;
  DigitalOut(const DigitalOut&) = delete;
  DigitalOut& operator=(const DigitalOut&) = delete;
  DigitalOut(DigitalOut&&) = delete;
  DigitalOut& operator=(DigitalOut&&) = delete;

  virtual void Write(bool value) = 0;
  virtual void Toggle() = 0;
  [[nodiscard]] virtual bool Read() = 0;
};

}  // namespace plum::interface
