#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \

K40, K50, K41, K51, K42, K52, K43, K53, K44, K54, K45, K55, K46, K56, \
K30, K60, K31, K61, K32, K62, K33, K63, K34, K64, K35, K65, K36, K66, \
K20, K70, K21, K71, K22, K72, K23, K73, K24, K74, K25, K75, K26, K76, \
K10, K80, K11, K81, K12, K82, K13, K83, K14, K84, K15, K85, K16, K86, \
K00, K90, K01, K91, K02, K92, K03, K93, K04, K94, K05, K95, K06, K96 \
)
{ \ 
    { K00, K01, K02, K03, K04, K05, K06 }, \
    { K10, K11, K12, K13, K14, K15, K16 }, \
    { K20, K21, K22, K23, K24, K25, K26 }, \
    { K30, K31, K32, K33, K34, K35, K36 }, \
    { K40, K41, K42, K43, K44, K45, K46 }, \
    { K50, K51, K52, K53, K54, K55, K56 }, \
    { K60, K61, K62, K63, K64, K65, K66 }, \
    { K70, K71, K72, K73, K74, K75, K76 }, \
    { K80, K81, K82, K83, K84, K85, K86 }, \
    { K90, K91, K92, K93, K94, K95, K96 } \
    
}
