CC=gcc
CFLAGS=-Wall -Werror -Wextra -Iincludes -std=gnu11
DEB_FLAGS=-g $(CFLAGS)
MATH_FLAGS=-lm $(CFLAGS)
MATH_DEB_FLAGS=-g $(MATH_FLAGS)

TARGET=build/main.bin
TARGET_DEB=debug/main.deb
SRCS := $(shell find src/ -name "*.c")

OBJS=$(patsubst src/%.c, build/%.o, $(SRCS))
DEB_OBJS=$(patsubst src/%.c, debug/%.o, $(SRCS))

all: $(TARGET)

debbug: $(TARGET_DEB)

$(TARGET): $(OBJS) | build
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEB): $(DEB_OBJS) | debug
	$(CC) $(DEB_FLAGS) $^ -o $@

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

debug/%.o: src/%.c | debug
	$(CC) $(DEB_FLAGS) -c $< -o $@

build:
	mkdir -p build

debug:
	mkdir -p debug

clean:
	rm -rf build
