#pragma once
#include QMK_KEYBOARD_H
#include "ergodox_ez.h"

#include "quantum.h"
#include "action.h"
#include "version.h"

enum user_layers {
    BASE,
    MODIFIERS_LEFT,
    MODIFIERS_RIGHT,
    GUI_LEFT,
    GUI_RIGHT,
    ARROWS_AND_FUNCTIONAL,
    SYMBOLS,
    FNUM_PAD,
    NUM_PAD,
    FULLY_TRANSPARENT
};
