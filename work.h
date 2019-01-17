#include CODEFILE
#define SPECIAL(x) 0x80000000
#if (COMMAND) == 0x80000000
#  undef SPECIAL
#  define SPECIAL(x) x
#  if (COMMAND) != 0x80000000
#    if COMMAND == LEFT
#      undef PTRL
#      pragma push_macro("PTR")
#      pragma pop_macro("PTRL")
#      include "l2r.h"
#    elif COMMAND == RIGHT
#      undef PTR
#      pragma push_macro("PTRL")
#      pragma pop_macro("PTR")
#      include "r2l.h"
#    elif COMMAND == NOP
#    elif COMMAND == HALT
#      define FINISHED
#    else
#      error Illegal command
#    endif
#    undef SPECIAL
#  endif
#endif // COMMAND
#ifdef SPECIAL
#  undef SPECIAL
#  include "evaluate.h"
#endif // SPECIAL
#ifndef CONDITION
#  define CONDITION PTR
#endif // CONDITION
#if CONDITION
#  undef STATUS
#  define STATUS TNEXT
#else
#  undef STATUS
#  define STATUS FNEXT
#endif // CONDITION
#undef CONDITION
