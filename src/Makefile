CC = gcc
bin = ../bin
include = ../include
lib = ../lib

$(bin)/program: main.c $(include)/primes.h $(lib)/primes.o
	$(CC) -o $(bin)/program main.c -I$(include)
$(lib)/primes.o: $(include)/primes.h
	$(CC) -o$(lib)/primes.o -c $(include)/primes.h

clean:
	rm -f $(lib)/*.o
	rm -f $(bin)/program

