# cheaderless

This is a bit of weird experiment that aims to get rid of headers (entirely!) in C.

(.c) files are straight included into other (.c) files. An import
directive serves to turn definitions into declarations while managing
the publicity of other header dependencies.

That is to say, object files are still compiled and linked. Static inline .c files are not being
included here. The system can grow beyond 1000 C files without the need for headers or long compile times.

```
make
./a.out
```
