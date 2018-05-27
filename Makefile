CC=g++
CFLAGS=-Wall -Werror
CCFLAGS=-Wall -Werror -c 

all:prog

prog: build/board.o build/board_print.o build/main.o bin
	$(CC) $(CFLAGS) build/board.o build/board_print.o build/main.o -o bin/prog

build/main.o: src/main.c build
	$(CC) $(CCFLAGS) src/main.c -o build/main.o

build/board.o: src/board.c build
	$(CC) $(CCFLAGS) src/board.c -o build/board.o

build/board_print.o: src/board_print.c build
	$(CC) $(CCFLAGS) src/board_print.c -o build/board_print.o

.PHONY: clean

bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf build/*.o
