#ifndef __WATCH__
#define __WATCH__

    #include <stdio.h>

    typedef struct
    {
        int hour;
        int minutes;
        int seconds;
    }
    Watch;

    Watch wnew(void)
    #ifdef WATCH
        ;
    #else
    {
        Watch w;
        w.hour = 4;
        w.minutes = 20;
        w.seconds = 0;
        return w;
    }
    #endif

    void wtell(const Watch w)
    #ifdef WATCH
        ;
    #else
    {
        printf("%d\n", w.hour);
        printf("%d\n", w.minutes);
        printf("%d\n", w.seconds);
    }
    #endif

#endif
