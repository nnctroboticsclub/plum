#pragma once

// Definitions
#include "interfaces/pin_names.h"  // IWYU pragma: export

// Drivers
#include "interfaces/can.h"          // IWYU pragma: export
#include "interfaces/digital_in.h"   // IWYU pragma: export
#include "interfaces/digital_out.h"  // IWYU pragma: export
#include "interfaces/pwm_out.h"      // IWYU pragma: export
#include "interfaces/sleep.h"        // IWYU pragma: export
#include "interfaces/thread.h"       // IWYU pragma: export
#include "interfaces/time.h"         // IWYU pragma: export

#ifdef __MBED_CONFIG_DATA__
#include "platforms/mbed/can.h"          // IWYU pragma: export
#include "platforms/mbed/digital_in.h"   // IWYU pragma: export
#include "platforms/mbed/digital_out.h"  // IWYU pragma: export
#include "platforms/mbed/pwm_out.h"      // IWYU pragma: export
#include "platforms/mbed/sleep.h"        // IWYU pragma: export
#include "platforms/mbed/thread.h"       // IWYU pragma: export
#include "platforms/mbed/time.h"         // IWYU pragma: export

using namespace plum::platform::mbed;
#endif

using namespace plum;
