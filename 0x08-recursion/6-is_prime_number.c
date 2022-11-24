#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: integer
 *
 * Return: 1 if prime number, else 0.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 *
 *
