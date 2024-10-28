CC = gcc
bin = ../bin
include = ../include
lib = ../lib

$(bin)/program: main.c $(include)/primes.h $(lib)/primes.o
	$(CC) -o $(bin)/program main.c $(lib)/primes.o -I$(include)
$(lib)/primes.o: primes.c $(include)/primes.h
	$(CC) -o$(lib)/primes.o -c primes.c -I$(include)

clean:
	rm -f $(lib)/*.o
	rm -f $(bin)/program

