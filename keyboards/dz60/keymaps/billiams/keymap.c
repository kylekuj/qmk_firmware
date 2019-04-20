#include QMK_KEYBOARD_H

<<<<<<< HEAD
=======
#define ______ KC_TRNS

>>>>>>> 156fd4e96... Initial commit
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
<<<<<<< HEAD
   * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |     \     |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Bkspc |
=======
   * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
>>>>>>> 156fd4e96... Initial commit
   * |-----------------------------------------------------------------------------------------+
   * |   Fn    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |Tap(/) Shft|  U  | ESC |
   * |-----------------------------------------------------------------------------------------+
<<<<<<< HEAD
   * | Ctrl |  Alt  |  Cmd  |              Space                | Alt |  Fn  |  L  |  D  |  R  |
=======
   * | Ctrl |  Alt  |  Cmd  |              Space                | Cmd |  Fn  |  L  |  D  |  R  |
>>>>>>> 156fd4e96... Initial commit
   * `-----------------------------------------------------------------------------------------'
   */

  LAYOUT_directional(
<<<<<<< HEAD
      KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, _______, KC_BSLS,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
      MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, _______, RSFT_T(KC_SLSH) , KC_UP, KC_ESCAPE,
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT
=======
      KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, ______, KC_BSPC,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, ______, RSFT_T(KC_SLSH) , KC_UP, KC_ESCAPE,
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT
>>>>>>> 156fd4e96... Initial commit
      ),

  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * |     |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |    DEL    |
   * |-----------------------------------------------------------------------------------------+
<<<<<<< HEAD
   * |        |RBB T|RGB M| Hue-| Hue+| Sat-| Sat+| Val-| Val+| Mute | Vol-| Vol+| Prev | Next |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     |     |     |     | Left| Down| Up |Right|      |      | Play/Pause |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |Scr- |Scr+ |           |PG_UP|RESET|
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |     |      | HOME|PG_DN| END |
=======
   * |        |RBB T|RGB M| Hue+| Hue-| Sat+| Sat-| Val+| Val-|     |     |     | Prev | Next  |
   * |-----------------------------------------------------------------------------------------+
   * |         | BL T| BL M| BL- | BL+ |     |     |     |     |     | Vol-| Vol+|  Play/Pause |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |Scr- |Scr+ |           |PG_UP|RESET|
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |            Play/Pause             |     |      | HOME|PG_DN| END |
>>>>>>> 156fd4e96... Initial commit
   * `-----------------------------------------------------------------------------------------'
   */

  LAYOUT_directional(
<<<<<<< HEAD
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11, KC_F12, _______, KC_DEL,
      _______, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, KC_MUTE, KC__VOLDOWN, KC__VOLUP, KC_MRWD, KC_MFFD,
      _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,
      KC_MPLY, _______, _______, _______, _______, _______, _______, _______, _______, KC_BRID, KC_BRIU, _______, _______, KC_PGUP, RESET,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDOWN, KC_END
=======
      ______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11, KC_F12, ______, KC_DEL,
      ______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, ______, ______, ______, KC_MEDIA_REWIND, KC_MEDIA_FAST_FORWARD,
      ______, BL_TOGG, BL_STEP, BL_DEC, BL_INC, ______, ______, ______, ______, ______, KC__VOLDOWN, KC__VOLUP,
      KC_MEDIA_PLAY_PAUSE, ______, ______, ______, ______, ______, ______, ______, ______, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, ______, ______, KC_PGUP, RESET,
      ______, ______, ______, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PLAY_PAUSE, ______, ______, KC_HOME, KC_PGDOWN, KC_END
>>>>>>> 156fd4e96... Initial commit
      ),
};
