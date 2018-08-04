# cheaderless

This is a bit of weird experiment to get rid of headers in C.

(.c) files are straight included into other (.c) files, but an import
directive serves to turn definitions into declarations while managing
the publicity of other header dependecies.

That is to say, object files are still compiled - This is not a direct inclusion of
static inline functions.

```
make
./a.out
```
