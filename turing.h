#ifndef PARSE
#define PARSE(x) x
#pragma push_macro("PARSE")
#undef PARSE
#pragma pop_macro("PARSE")
#ifndef PARSE
#error push_macro/pop_macro not supported!
#else
#define GET03(x,y,z) x
#define GET13(x,y,z) y
#define GET23(x,y,z) z
#define GETN(n,l) PARSE(GET##n l)
#define COMMAND GETN(03, MOVE)
#define TNEXT GETN(13, MOVE)
#define FNEXT GETN(23, MOVE)
#define LEFT SPECIAL(1)
#define RIGHT SPECIAL(2)
#define NOP SPECIAL(3)
#define HALT SPECIAL(5)
#define DEPTH 0
#pragma push_macro("DEPTH")
#undef DEPTH
#define DEPTH 1
#endif
#endif


#ifdef PARSE
#define STATUS 0
#define PTRL 0
#define PTR 0

#include "infloop.h"

#include "clrmemlp.h"

#pragma pop_macro("DEPTH")
#undef FINISHED
#undef STATUS
#undef PTRL
#undef PTR

#endif
