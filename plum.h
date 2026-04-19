#pragma once

// Definitions
#include "interfaces/pin_names.h"  // IWYU pragma: keep

// Drivers
#include "interfaces/can.h"          // IWYU pragma: keep
#include "interfaces/digital_in.h"   // IWYU pragma: keep
#include "interfaces/digital_out.h"  // IWYU pragma: keep
#include "interfaces/pwm_out.h"      // IWYU pragma: keep
#include "interfaces/sleep.h"        // IWYU pragma: keep
#include "interfaces/time.h"         // IWYU pragma: keep

#ifdef __MBED_CONFIG_DATA__
#include "platforms/mbed/can.h"          // IWYU pragma: keep
#include "platforms/mbed/digital_in.h"   // IWYU pragma: keep
#include "platforms/mbed/digital_out.h"  // IWYU pragma: keep
#include "platforms/mbed/pwm_out.h"      // IWYU pragma: keep
#include "platforms/mbed/thread.h"       // IWYU pragma: keep
#include "platforms/mbed/time.h"         // IWYU pragma: keep
using namespace plum::platform::mbed;
#endif

using namespace plum;
