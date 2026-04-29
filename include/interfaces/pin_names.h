#pragma once

#include <cstdint>

namespace plum::interface {

// F303K8 family
#if defined(TARGET_NUCLEO_F303K8) || defined(TARGET_STM32F303x8) || \
    defined(STM32F303x8) || defined(STM32F303xx)
enum class PinName : std::uint16_t {
  kPA0 = 0x00,
  kPA1 = 0x01,
  kPA2 = 0x02,
  kPA3 = 0x03,
  kPA4 = 0x04,
  kPA5 = 0x05,
  kPA6 = 0x06,
  kPA6Alt0 = kPA6 | 0x100,
  kPA7 = 0x07,
  kPA7Alt0 = kPA7 | 0x100,
  kPA7Alt1 = kPA7 | 0x200,
  kPA8 = 0x08,
  kPA9 = 0x09,
  kPA10 = 0x0A,
  kPA11 = 0x0B,
  kPA11Alt0 = kPA11 | 0x100,
  kPA12 = 0x0C,
  kPA12Alt0 = kPA12 | 0x100,
  kPA13 = 0x0D,
  kPA14 = 0x0E,
  kPA15 = 0x0F,
  kPB0 = 0x10,
  kPB0Alt0 = kPB0 | 0x100,
  kPB1 = 0x11,
  kPB1Alt0 = kPB1 | 0x100,
  kPB3 = 0x13,
  kPB4 = 0x14,
  kPB4Alt0 = kPB4 | 0x100,
  kPB5 = 0x15,
  kPB5Alt0 = kPB5 | 0x100,
  kPB6 = 0x16,
  kPB7 = 0x17,
  kPB7Alt0 = kPB7 | 0x100,
  kPF0 = 0x50,
  kPF1 = 0x51,

  kNC = 0xFFFF
};

// F446RE family
#elif defined(TARGET_NUCLEO_F446RE) || defined(TARGET_STM32F446xE) || \
    defined(STM32F446xE) || defined(STM32F446xx)
enum class PinName : std::uint8_t {
  kPA0 = 0x00,
  kPA1 = 0x01,
  kPA2 = 0x02,
  kPA3 = 0x03,
  kPA4 = 0x04,
  kPA5 = 0x05,
  kPA6 = 0x06,
  kPA7 = 0x07,
  kPA8 = 0x08,
  kPA9 = 0x09,
  kPA10 = 0x0A,
  kPA11 = 0x0B,
  kPA12 = 0x0C,
  kPA13 = 0x0D,
  kPA14 = 0x0E,
  kPA15 = 0x0F,
  kPB0 = 0x10,
  kPB1 = 0x11,
  kPB2 = 0x12,
  kPB3 = 0x13,
  kPB4 = 0x14,
  kPB5 = 0x15,
  kPB6 = 0x16,
  kPB7 = 0x17,
  kPB8 = 0x18,
  kPB9 = 0x19,
  kPB10 = 0x1A,
  kPB12 = 0x1C,
  kPB13 = 0x1D,
  kPB14 = 0x1E,
  kPB15 = 0x1F,
  kPC0 = 0x20,
  kPC1 = 0x21,
  kPC2 = 0x22,
  kPC3 = 0x23,
  kPC4 = 0x24,
  kPC5 = 0x25,
  kPC6 = 0x26,
  kPC7 = 0x27,
  kPC8 = 0x28,
  kPC9 = 0x29,
  kPC10 = 0x2A,
  kPC11 = 0x2B,
  kPC12 = 0x2C,
  kPC13 = 0x2D,
  kPC14 = 0x2E,
  kPC15 = 0x2F,
  kPD2 = 0x32,
  kPH0 = 0x70,
  kPH1 = 0x71,

  kNC = 0xFF
};

#else
#error \
    "Unsupported board for plum::interface::PinName. Add mapping for this target."
#endif

}  // namespace plum::interface
