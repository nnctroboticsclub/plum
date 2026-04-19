#pragma once

#include <array>
#include <cstdint>

namespace plum::interface {

enum CanFrameType : uint8_t { kCanStandard = 0, kCanExtended = 1, kCanAny = 2 };

struct CanMessage {
  uint32_t id = 0;
  std::array<uint8_t, 8> data{};
  uint8_t length = 8;
  CanFrameType frame_type = kCanStandard;
};

class Can {
 public:
  Can() = default;
  virtual ~Can() = default;
  Can(const Can&) = delete;
  Can& operator=(const Can&) = delete;
  Can(Can&&) = delete;
  Can& operator=(Can&&) = delete;

  virtual bool Send(const CanMessage& msg) = 0;
  virtual bool Receive(CanMessage& msg) = 0;

  virtual bool SetFilter(
      uint32_t filter_id, uint32_t mask,
      interface::CanFrameType frame_type = interface::kCanAny) = 0;

  [[nodiscard]] virtual int GetSendError() = 0;
  [[nodiscard]] virtual int GetReceiveError() = 0;
};

}  // namespace plum::interface
