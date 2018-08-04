#ifndef _PERSON_H_
#define _PERSON_H_

    /* Libraries public to this compilation may go here. */

    #ifndef IMPORT
        /* Libraries private to this compilation may go here. */
        #include <stdio.h>
    #endif

    typedef struct
    {
        int age;
        int height;
        int weight;
    }
    Person;

    /* Creates a new person on the stack. */
    Person pnew(void)
    #ifdef IMPORT
        ;
    #else
    {
        Person p;
        p.age = 24;
        p.height = 200;
        p.weight = 190;
        return p;
    }
    #endif

    /* Prints person details. */
    void pspeak(const Person p)
    #ifdef IMPORT
        ;
    #else
    {
        printf("%d\n", p.age);
        printf("%d\n", p.height);
        printf("%d\n", p.weight);
    }
    #endif

#endif
