#if STATUS == 0
#undef MOVE
#define MOVE (PTR+1, 1, 1)
#elif STATUS == 1
printf ("x = %d, ", PTRL);
#undef MOVE
#define MOVE (RIGHT, 2, 2)
#elif STATUS == 2
#undef MOVE
#define MOVE (PTR+3, 5, 5)
#elif STATUS == 5
printf ("3x = %d\n", PTRL);
#undef MOVE
#define MOVE (LEFT, 6, 6)
#elif STATUS == 6
#undef MOVE
#define MOVE (NOP, 0, 7)
#elif STATUS == 7
#undef MOVE
#define MOVE (HALT, 0, 0)
printf ("END\n");
#endif // STATUS
