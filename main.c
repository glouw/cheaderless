#define PERSON
#include "PERSON.c"

/* Importing WATCH is not necessary as PERSON already includes it,
 * but this shows how two imports are used in a single file. */
#define WATCH
#include "WATCH.c"

int main()
{
    Person me = pnew();
    pspeak(me);
    return 0;
}
