CC=gcc
FLAGS=-Wall -Werror -Wextra -o
FLAGS_DEB=-g $(FLAGS)
FLAGS_MATH=-lm $(FLAGS)
FLAGS_MATH_DEB=-g $(FLAGS_MATH)

make: main.c
	$(CC) main.c $(FLAGS) main.bin

debug: main.c
	$(CC) main.c $(FLAGS_DEB) main.deb

math: main.c
	$(CC) main.c $(FLAGS_MATH) main.mbin

math_debug: main.c
	$(CC) main.c $(FLAGS_MATH_DEB) main.mdeb
