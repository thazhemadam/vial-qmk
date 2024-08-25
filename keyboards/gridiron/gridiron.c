#include "gridiron.h"

led_config_t g_led_config = { {
    { 5,      NO_LED, 4,      NO_LED, NO_LED, 3,      NO_LED, NO_LED, 2,      NO_LED, 1,      NO_LED },
    { 6,      NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 0      },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { 7,      NO_LED, 8,      NO_LED, 9,      NO_LED, 10,     NO_LED, 11,     NO_LED, 12,     NO_LED }
},  {
    { 20,0 }, { 61,0 }, { 122,0 }, { 183,0 }, { 224,0 },
    { 20,32 }, { 224,32 },
    { 20,64 }, { 61,64 }, { 101,64 }, { 142,64 }, { 183,64 }, { 224,64 }
}, {
    1, 1, 1, 1, 1,
    1, 1,
    1, 1, 1, 1, 1, 1
} };
