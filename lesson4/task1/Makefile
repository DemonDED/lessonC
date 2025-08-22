CC=gcc
CFLAGS=-Wall -Werror -Wextra -lm

make: main.c
	$(CC) main.c -o main $(CFLAGS)

debbug: main.c
	$(CC) main.c -o main.deb $(CFLAGS) -g
	gdb main.deb
