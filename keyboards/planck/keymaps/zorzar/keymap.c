#include QMK_KEYBOARD_H

enum planck_layers { _QWERTY, _SYMBOLS, _GAMING, _NAVIGATION, _NUMBERS };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Qwerty
     * ,-----------------------------------------------------------------------------------------------.
     * |   `   |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   | Bksp  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | Esc   |Ctrl/A | Alt/S | GUI/D | Sym/F | Num/G | Num/H | Sym/J | GUI/K | Alt/L |Ctrl/; |  "    |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | Shift |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |   /   | Shift |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | CAG   |       |       | Esc   |  Spc  | Bksp  |  Tab  |Nav/Spc|  Ent  |       |       | CAG   |
     * `-----------------------------------------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_ortho_4x12(                                                                                                                                                               //
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,                                                                                                             //
        KC_ESC, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LT(_SYMBOLS, KC_F), LT(_NUMBERS, KC_G), LT(_NUMBERS, KC_H), LT(_SYMBOLS, KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,  //
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,                                                                                                    //
        LCAG(KC_NO), KC_NO, KC_NO, KC_ESC, KC_SPC, KC_BSPC, KC_TAB, LT(_NAVIGATION, KC_SPC), KC_ENT, KC_NO, KC_NO, LCAG(KC_NO)                                                                   //
        ),
    /* Symbols TODO
     * ,-----------------------------------------------------------------------------------------------.
     * |       |   _   |   _   |   [   |   ]   |       |   !   |   <   |   >   |   =   |   &   |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |   \   |   /   |   {   |   }   |   *   |   ?   |   (   |   )   |   -   |   @   |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |   #   |   X   |   |   |   ~   |   `   |   +   |   %   |   "   |   '   |   /   |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |  Del  |       |       |       |       |       |Gaming |
     * `-----------------------------------------------------------------------------------------------'
     */
    [_SYMBOLS] = LAYOUT_ortho_4x12(                                                                            //
        KC_NO, KC_UNDS, KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC, KC_EXLM, KC_LT, KC_GT, KC_EQL, KC_AMPR, KC_NO,     //
        KC_NO, KC_RO, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR, KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_AT, KC_NO,    //
        KC_NO, KC_HASH, KC_DLR, KC_PIPE, KC_TILD, KC_GRV, KC_PLUS, KC_PERC, KC_DQUO, KC_QUOT, KC_SCLN, KC_NO,  //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(_GAMING)              //
        ),
    /* Gaming
     * ,-----------------------------------------------------------------------------------------------.
     * |   `   |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   | Bksp  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |   V   |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |  "    |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | Shift |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |   /   | Shift |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | LCtrl |       |       | Esc   |  Spc  | Bksp  |  Tab  |  Spc  |  Ent  |       |       |QWERTY |
     * `-----------------------------------------------------------------------------------------------'
     */
    [_GAMING] = LAYOUT_ortho_4x12(                                                                          //
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,                        //
        KC_V, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,                       //
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,               //
        KC_LCTRL, KC_NO, KC_NO, KC_ESC, KC_SPC, KC_BSPC, KC_TAB, KC_SPC, KC_ENT, KC_NO, KC_NO, DF(_QWERTY)  //
        ),
    /* Navigation TODO
     * ,-----------------------------------------------------------------------------------------------.
     * |       |       |       |       |       |       |       |       |       |       |       |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |       |       |       |       |       |       |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |       |       |       |       |       |       |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |       |       |       |       |       |       |       |
     * `-----------------------------------------------------------------------------------------------'
     */
    [_NAVIGATION] = LAYOUT_ortho_4x12(                                                              //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO,  //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,   //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO          //
        ),
    /* Numbers
     * ,-----------------------------------------------------------------------------------------------.
     * |       |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   9   |   0   |       |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |       |   4   |   5   |   6   |   0   |       |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |       |   1   |   2   |   3   |       |       |       |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |       |       |       |       |       |       |   0   |       |       |       |       |       |
     * `-----------------------------------------------------------------------------------------------'
     */
    [_NUMBERS] = LAYOUT_ortho_4x12(                                                        //
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,          //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_0, KC_NO,    //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,   //
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_NO, KC_NO, KC_NO, KC_NO  //
        )                                                                                  //
};
