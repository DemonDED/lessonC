CC=gcc
FLAGS=-Wall -Werror -Wextra -o
FLAGS_DEB=-g $(FLAGS)

make: main.c
	$(CC) main.c $(FLAGS) main.bin

debug: main.c
	$(CC) main.c $(FLAGS_DEB) main.deb
