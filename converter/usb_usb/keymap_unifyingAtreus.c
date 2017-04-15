/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"

/*
 *  the unifying matrix for Atreus:
 *
 *  pin         23      22      21      8       7       9       2       6       5        4        3       1
 *          ,-------------------------------------------------------------------------------------------------.
 *  10      |C      | E     |  \    |  Enter | I    |       |       |   D    |   1   |   `   |    4   |   Esc |
 *          |-------------------------------------------------------------------------------------------------|
 *  14      |B      | num3  |  num6 |  L     | P    |       |       |   Q    |   [   |   T   |    F8  |   F4  |
 *          |-------------------------------------------------------------------------------------------------|
 *  15      |N      | numlk |  num9 |  ;     | Y    |   Z   |       |   Caps |   F12 |   X   |    F9  |   F5  |
 *          |-------------------------------------------------------------------------------------------------|
 *  16      |Space  | Num+  |  Bs   |  num8  | 6    |       |   F11 |   F1   |   F2  |   W   |    Tab |   F6  |
 *          `-------------------------------------------------------------------------------------------------'
 */
#define KEYMAP_ATREUS( \
    K06,K08,K31,K28,K0C,        K07,K1E,K35,K21,K29, \
    K05,K5B,K5E,K0F,K13,        K14,K2F,K17,K41,K3D, \
    K11,K53,K61,K33,K1C,        K39,K45,K1B,K42,K3E, \
    K2C,K57,K2A,K60,K23,K1D,K44,K3A,K3B,K1A,K2B,K3F  \
) KEYMAP_ALL( \
            NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO, NO,                                               \
    K29,    K3A,K3B,NO, K3D,K3E,K3F,NO, K41,K42,NO, K44,K45,      NO, NO, NO,   NO, NO, NO, NO,  NO,      \
    K35,K1E,NO, NO, K21,NO, K23,NO, NO, NO, NO, NO, NO, NO, K2A,  NO, NO, NO,   K53,NO, NO, NO,  NO, NO,  \
    K2B,K14,K1A,K08,NO, K17,K1C,NO, K0C,NO, K13,K2F,NO,     K31,  NO, NO, NO,   NO, K60,K61,K57, NO, NO,  \
    K39,NO, NO, K07,NO, NO, NO, NO, NO, K0F,K33,NO,     NO, K28,                NO, NO, K5E,NO,  NO, NO,  \
    NO, NO, K1D,K1B,K06,NO, K05,K11,NO, NO, NO, NO,     NO, NO,       NO,       NO, NO, K5B,NO,  NO, NO,  \
    NO, NO, NO, NO, NO,     K2C,    NO, NO, NO, NO, NO, NO, NO,   NO, NO, NO,   NO,     NO, NO,  NO, NO   \
)

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 
     *  0: qwerty
     *  ,-----------------------------------------------------------.
     *  | Q  | W  | E  | R  | T  |    |    | Y  | U  | I  | O  | P  |
     *  |-----------------------------------------------------------|
     *  | A  | S  | D  | D  | F  |    |    | H  | J  | K  | L  |BSPC|
     *  |-----------------------------------------------------------|
     *  | Z  | X  | C  | V  | B  |    |    | N  | M  | ,  | .  | /  |
     *  |-----------------------------------------------------------|
     *  |TAB |CTL |ALT |SFT |FN0 |SPC |SPC |FN1 | \  | ;  | '  |ENT |
     *  `-----------------------------------------------------------'
     */
    KEYMAP_ATREUS(
        Q,   W,   E,   R,   T,             Y,   U,   I,   O,   P,    \
        A,   S,   D,   F,   G,             H,   J,   K,   L,   BSPC, \
        Z,   X,   C,   V,   B,             N,   M,   COMM,DOT, SLSH, \
        TAB, LCTL,LALT,LSFT,FN0, SPC, SPC, FN1, BSLS,SCLN,QUOT,ENT  ),
        
    /* 
     *  1: fn0
     *  ,-----------------------------------------------------------.
     *  | 1  | 2  | 3  | 4  | 5  |    |    | 6  | 7  | 8  | 9  | 0  |
     *  |-----------------------------------------------------------|
     *  |INS |HOME|PGUP| D  | F  |    |    | H  | `  | [  | ]  |BSPC|
     *  |-----------------------------------------------------------|
     *  |DEL |END |PGDN| V  | B  |    |    | N  | M  | ,  | .  | /  |
     *  |-----------------------------------------------------------|
     *  |ESC |CTL |ALT |SFT |FN0 |SPC |SPC |LEFT| UP |DOWN|RGHT|ENT |
     *  `-----------------------------------------------------------'
     */
    KEYMAP_ATREUS(
        1,   2,   3,   4,   5,             6,   7,   8,   9,   0,    \
        INS, HOME,PGUP,F,   G,             H,   GRV, LBRC,RBRC,BSPC, \
        DEL, END, PGDN,V,   B,             N,   M,   COMM,DOT, SLSH, \
        ESC, LCTL,LALT,LSFT,FN0, SPC, SPC, LEFT,UP,  DOWN,RGHT,ENT  ),
        
    /* 
     *  1: fn1
     *  ,-----------------------------------------------------------.
     *  | F1 | F2 | F3 | F4 | F5 |    |    | F6 | F7 | F8 | F9 |F11 |
     *  |-----------------------------------------------------------|
     *  | A  | S  | D  | D  | F  |    |    | H  | J  | K  | L  |BSPC|
     *  |-----------------------------------------------------------|
     *  | Z  | X  | C  | V  | B  |    |    | N  | M  | ,  | .  | /  |
     *  |-----------------------------------------------------------|
     *  |TAB |CTL |ALT |SFT |FN0 |SPC |SPC |LEFT| UP |DOWN|RGHT|ENT |
     *  `-----------------------------------------------------------'
     */
    KEYMAP_ATREUS(
        Q,   W,   E,   R,   T,             Y,   U,   I,   O,   P,    \
        A,   S,   D,   F,   G,             H,   J,   K,   L,   BSPC, \
        Z,   X,   C,   V,   B,             N,   M,   COMM,DOT, SLSH, \
        TAB, LCTL,LALT,MHEN,FN0, SPC, SPC, LEFT,UP,  DOWN,RGHT,ENT ),
        
};


const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
};

