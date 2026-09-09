CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iinclude -std=gnu11
DEB_FLAGS=-g $(CFLAGS)
MATH_FLAGS=-lm $(CFLAGS)
MATH_DEB_FLAGS=-g -lm $(CFLAGS)

TARGET=build/main.bin

SRCS=$(wildcard src/*.c)
OBJS=$(patsubst src/%.c, build/%.o, $(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS) | build
	$(CC) $(CFLAGS) $^ -o $@ 

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

build:
	mkdir -p build

clean:
	rm -rf build

debbug: $(OBJS) | build
	$(CC) $(DEB_FLAGS) $^ -o build/main.deb

.PHONY: all clean
