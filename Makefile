# Makefile

all: build run

run:
	./bin/dsa

build: mkbin
	gcc \
	-g node/node.c linked-list/linked_list.c main.c \
	-o bin/cdsa

mkbin:
	mkdir -p bin
