#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _COLEMAK 1
#define _RAISE 2
#define KC_CAD  LALT(LCTL(KC_DEL))

#define RAISE MO(_RAISE)
#define COLEMAK TG(_COLEMAK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,LCTL(KC_BSPC),
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_TAB, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                          KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                      KC_LBRC,KC_RBRC,                                                       KC_PLUS, KC_EQL,
                                      KC_SPC,RAISE,                           KC_BSPC, KC_SFTENT,

                                      LALT_T(KC_TAB),KC_HOME,                 KC_END,  KC_DEL,
                                      KC_LCTRL, KC_LGUI,                      KC_LGUI, KC_GRV
  ),

  [_COLEMAK] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,LCTL(KC_BSPC),
     KC_TAB , KC_Q  , KC_W  , KC_F  , KC_P  , KC_B  ,                         KC_J  , KC_L  , KC_U  , KC_Y  , KC_SCLN  ,KC_MINS,
     KC_TAB, KC_A  , KC_R  , KC_S  , KC_T  , KC_G  ,                          KC_M  , KC_N  , KC_E  , KC_I  ,KC_O,KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_D  , KC_Z  ,                         KC_K  , KC_H  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                      KC_LBRC,KC_RBRC,                                                       KC_PLUS, KC_EQL,
                                      KC_SPC,RAISE,                           KC_BSPC, KC_SFTENT,

                                      KC_LALT,KC_HOME,                        KC_END,  KC_DEL,
                                      KC_LCTRL, KC_CAD,                       KC_LGUI, KC_GRV
  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,_______,KC_LPRN,                        KC_RPRN,_______,KC_UP, KC_INS ,KC_CAPSLOCK, KC_MUTE,
       _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LEFT_CURLY_BRACE,            KC_RIGHT_CURLY_BRACE, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, KC_VOLU,
       LCTL(KC_Z),_______,_______,LCTL(KC_C),LCTL(KC_V),KC_LBRC,               KC_RBRC,_______,LALT(KC_LEFT),LALT(KC_RGHT),KC_PGDN,KC_VOLD,
                       _______,_______,                                              LCTL(LSFT(KC_TAB)) ,LCTL(KC_TAB),
                                               COLEMAK,_______,                LCTL(KC_BSPC),_______,

                                               _______,_______,                _______,_______,
                                               _______,_______,                _______,_______
  ),
};