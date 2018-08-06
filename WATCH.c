#ifndef __WATCH__
#define __WATCH__

#include <stdio.h>

#undef defines
#ifdef WATCH
    #define defines(...);
#else
    #define defines(...){__VA_ARGS__}
#endif

typedef struct
{
    int hour;
    int minutes;
    int seconds;
}
Watch;

Watch wnew(void) defines
(
    Watch w;
    w.hour = 4;
    w.minutes = 20;
    w.seconds = 0;
    return w;
)

void wtell(const Watch w) defines
(
    printf("%d\n", w.hour);
    printf("%d\n", w.minutes);
    printf("%d\n", w.seconds);
)

#endif
