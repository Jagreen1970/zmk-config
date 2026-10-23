
#ifndef __config_globals_h__
#define __config_globals_h__

#include <behaviors.dtsi>
#include <behaviors/num_word.dtsi> // Requires auto-layer module.
#include <dt-bindings/zmk/keys.h>

/* source keypos definitions */
#include "zmk-helpers/key-labels/36.h"

/* activate bluetooth */
#define CONFIG_WIRELESS 1
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/outputs.h>
#define _BT_SEL_KEYS_ &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_CLR

#define HOST_OS 2 // set to 2 for macOS/Windows-Alt-Codes, default is 0 (Windows)
#include "zmk-helpers/helper.h"

/* Global key definitions */

#define XXX &none
#define ___ &trans

/* Global key positions */

// KEYS_L (left hand), KEYS_R (right hand) and THUMBS are defined by
// zmk-helpers/key-labels/36.h above.

/* Other global settings */

#define QUICK_TAP_MS 175

#endif // __config_globals_h__