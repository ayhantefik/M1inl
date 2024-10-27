#ifndef _PRIMES_H
#define _PRIMES_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *iarr_to_str(char *buf, int *iarr, int ialen);
bool is_prime(int num);
int get_next_prime(int prime);
int *prime_factors(int *buffer, int *factors, int num);

#endif

