CC = gcc
CFLAGS = -Wall -std=c99 -O2
LIB = libsimplycalc.a
SRCS = simplycalc.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean install uninstall

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c simplycalc.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(LIB)

install: $(LIB)
	sudo mkdir -p /usr/local/include /usr/local/lib
	sudo cp simplycalc.h /usr/local/include/
	sudo cp $(LIB) /usr/local/lib/
	sudo ldconfig

uninstall:
	sudo rm -f /usr/local/include/simplycalc.h /usr/local/lib/$(LIB)
	sudo ldconfig

