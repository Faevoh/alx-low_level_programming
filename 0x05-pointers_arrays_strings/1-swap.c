#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: integer value1
  * @b: integer value2
  * Return: 0
  */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
