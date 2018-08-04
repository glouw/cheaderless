#ifndef _PERSON
#define _PERSON

    #include <stdio.h>

    #define WATCH
    #include "WATCH.c"

    typedef struct
    {
        int age;
        int height;
        int weight;
        Watch watch;
    }
    Person;

#endif

    Person pnew(void)
#ifdef PERSON
    ;
#else
    {
        Person p;
        p.age = 22;
        p.height = 200;
        p.weight = 220;
        p.watch = wnew();
        return p;
    }
#endif

    void pspeak(const Person p)
#ifdef PERSON
    ;
#else
    {
        printf("%d\n", p.age);
        printf("%d\n", p.height);
        printf("%d\n", p.weight);
        wtell(p.watch);
    }
#endif
