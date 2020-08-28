# Author: Patrick Tinsley
# E-mail: ptinsley@nd.edu
#
# This is the Makefile for the Lab03

# CC is for the GCC compiler for C 
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course 
CFLAGS := -O0 -g -std=c11 -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm


# First Example of Header Files
# Command: make Lab03

objs := amplifier.o Lab03.o 

Lab03: $(objs)
	$(CC) $(CFLAGS) -o Lab03 $(objs)

Lab03.o: Lab03.c amplifier.h
	$(CC) $(CFLAGS) -c Lab03.c

amplifier.o: amplifier.c amplifier.h
	$(CC) $(CFLAGS) -c amplifier.c

# Make all
all: Lab03

# Make clean
clean :
	rm -rf *.o Lab03