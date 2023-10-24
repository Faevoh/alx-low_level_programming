#include "main.h"

int prime_number(int m, int p);

/**
  *is_prime_number - checks for prime numbers
  *@n: integer variable
  *Return: returns 1 if n is a prime number
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
  * prime_number - checks for prime numbers
  *@m: integer variable 1
  *@p: integer variable 2
  *Return: 1for prime numbers and 0 if not
  */

int prime_number(int m, int p)
{
	if (p == 1)
	{
		return (1);
	}
	if (m % p == 0 && p > 0)
		return (0);
	return (prime_number(m, p - 1));
}
