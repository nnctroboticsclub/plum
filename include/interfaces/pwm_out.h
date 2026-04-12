#pragma once

namespace plum::interface {

class PwmOut {
 public:
  PwmOut() = default;
  virtual ~PwmOut() = default;
  PwmOut(const PwmOut&) = delete;
  PwmOut& operator=(const PwmOut&) = delete;
  PwmOut(PwmOut&&) = delete;
  PwmOut& operator=(PwmOut&&) = delete;

  virtual void Write(float duty_cycle) = 0;
  [[nodiscard]] virtual float Read() = 0;
  virtual void SetPeriod(float seconds) = 0;
  virtual void SetFrequency(float frequency) = 0;
};

}  // namespace plum::interface
