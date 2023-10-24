#include "main.h"

int natural_sqrt(int j, int k);

/**
  *_sqrt_recursion - prints the natural square root of a number
  *@n: integer variable
  *Return: sqrt of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt(n, 0));
}

/**
  * natural_sqrt - recursion to find natural number
  *@j: integer variable
  *@k: integer iterator
  *Return: square value
  */

int natural_sqrt(int j, int k)
{
	if (k * k > j)
		return (-1);
	if (k * k == j)
		return (k);
	return (natural_sqrt(j, k + 1));
}
