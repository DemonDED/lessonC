CC=gcc
CFLAGS=-Wall -Werror -Wextra -g

make: main.c
	$(CC) main.c -o main $(CFLAGS)
	objdump -s main | grep debug
