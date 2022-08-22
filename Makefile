#!/bin/bash

CC=gcc
CFLAGS=-g -Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: all

all:
	$(CC) $(CFLAGS) *.c -o print
.PHONY: clean
clean:
	rm -f print *.o
