#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT(\
    L00, L01, L02, L03, L04, L05,                    R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,                    R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,                    R20, R21, R22, R23, R24, R25, \
              L30, L31,                                        R30, R31,           \
                        L40, L41, L42,               R40, R41, R42,                 \
                        L50, L51,                    R50, R51                     \
    ) \
    { \
        { L00,   L01,   L02, L03, L04, L05 }, \
        { L10,   L11,   L12, L13, L14, L15 }, \
        { L20,   L21,   L22, L23, L24, L25 }, \
        { KC_NO, KC_NO, L30, L31, L40, KC_NO }, \
        { KC_NO, KC_NO, L51, L42, L50, L41 }, \
\
        { R00, R01, R02, R03, R04,   R05   }, \
        { R10, R11, R12, R13, R14,   R15   }, \
        { R20, R21, R22, R23, R24,   R25   }, \
        { KC_NO, R42, R30, R31, KC_NO, KC_NO }, \
        { R41, R51, R40, R50, KC_NO, KC_NO } \
\
   }
