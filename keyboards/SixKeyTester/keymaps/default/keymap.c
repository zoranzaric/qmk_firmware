/* Copyright 2020 Zoran Zaric
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names { _BASE };

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { HELLO_WORLD };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, HELLO_WORLD)  //
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HELLO_WORLD:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("Hello ");
            } else {
                // when keycode is released
                SEND_STRING("World! ");
            }
            break;
    }
    return true;
}
