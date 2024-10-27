CC = gcc
bin = ../bin
include = ../include
lib = ../lib
src = .

$(bin)/program: main.c $(include)/primes.h $(lib)/primes.o
	$(CC) -o $(bin)/program main.c -I$(include) $(lib)/primes.o
$(lib)/primes.o: $(src)/primes.c
	$(CC) -o $(lib)/primes.o -c $(src)/primes.c -I$(include) 

clean:
	rm -f $(lib)/*.o
	rm -f $(bin)/program

