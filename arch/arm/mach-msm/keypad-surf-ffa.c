#if defined(CONFIG_MACH_COOPER)
#include "keypad-cooper.c"
#elif defined(CONFIG_MACH_BENI)
#include "keypad-beni.c"
#elif defined(CONFIG_MACH_TASS)
#include "keypad-tass.c"
#elif defined(CONFIG_MACH_LUCAS)
#include "keypad-lucas.c"
#elif defined(CONFIG_MACH_CALLISTO)
#include "keypad-callisto.c"
#else
#endif

