CC = gcc
CFLAGS = -Wall
LDFLAGS = -Wall

RED = "\033[31m"
GREEN = "\033[32m"
YELLOW = "\033[33m"
BLUE = "\033[34m"
PURPLE = "\033[35m"
CYAN = "\033[35m"
RESET = "\033[0m"

all: test
	@echo -e $(GREEN)Everything is done$(RESET)

clean:
	@echo -e $(RED)Removing object files$(RESET)
	@rm -vf *.o

distclean: clean
	@echo -e $(RED)Removing executable files$(RESET)
	@rm -vf test

test: test.o simple_log.o
	@echo -e $(BLUE)Linking $@ against $^$(RESET)
	$(CC) $(LDFLAGS) -o $@ $^

simple_log.o: simple_log.h

%.o: %.c
	@echo -e $(YELLOW)Building $@ with $^$(RESET)
	$(CC) $(CFLAGS) -o $@ -c $<
