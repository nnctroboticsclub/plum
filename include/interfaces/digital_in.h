#pragma once

namespace plum::interface {

class DigitalIn {
 public:
  DigitalIn() = default;
  virtual ~DigitalIn() = default;
  DigitalIn(const DigitalIn&) = delete;
  DigitalIn& operator=(const DigitalIn&) = delete;
  DigitalIn(DigitalIn&&) = delete;
  DigitalIn& operator=(DigitalIn&&) = delete;

  [[nodiscard]] virtual bool Read() = 0;
};

}  // namespace plum::interface
