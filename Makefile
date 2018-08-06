BIN = a.out

SRCS = main.c PERSON.c WATCH.c
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

CFLAGS = -Wshadow -Wall -Wpedantic -Wextra -g -std=c99

LDFLAGS = -lm

$(BIN): $(OBJS)
	gcc $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(BIN)

%.o : %.c Makefile
	gcc $(CFLAGS) -MMD -MP -MT $@ -MF $*.td -c $<
	mv -f $*.td $*.d

%.d: ;
-include *.d

clean:
	rm -f $(BIN) $(OBJS) $(DEPS)
