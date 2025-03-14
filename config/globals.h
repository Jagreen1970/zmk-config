
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

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 // left hand
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 // right hand
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2                                     // thumbs

/* Other global settings */

#define QUICK_TAP_MS 175

#endif // __config_globals_h__