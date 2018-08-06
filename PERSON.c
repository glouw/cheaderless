#ifndef __PERSON__
#define __PERSON__

#include <stdio.h>

/* Modules are included here.
 * The module name must be defined before its .c file is included.
 * This will swap out module definitions for declarations. */
#define WATCH
#include "WATCH.c"

/* The _defines_ macro must be undefined first as previous modules
 * will have it alreayd defined. Note that _defines_ must be defined
 * last after the inclusion of other modules. */
#undef defines
#ifdef PERSON
    #define defines(...);
#else
    #define defines(...){__VA_ARGS__}
#endif

typedef struct
{
    int age;
    int height;
    int weight;
    Watch watch;
}
Person;

Person pnew(void) defines
(
    Person p;
    p.age = 22;
    p.height = 200;
    p.weight = 220;
    p.watch = wnew();
    return p;
)

void pspeak(const Person p) defines
(
    printf("%d\n", p.age);
    printf("%d\n", p.height);
    printf("%d\n", p.weight);
    wtell(p.watch);
)

#endif
