CC=gcc
FLAGS=-Wall -Werror -Wextra -o

make: main.c
	$(CC) main.c $(FLAGS) main.bin

debug: main.c
	$(CC) main.c $(FLAGS) main.deb -g

math: main.c
	$(CC) main.c $(FLAGS) main.mbin -lm -g
