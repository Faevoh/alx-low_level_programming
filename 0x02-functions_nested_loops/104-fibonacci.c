#include <stdio.h>

/**
  * main - print first 98 fibonacci numbers
  *
  * Return: Always 0.
  */

int main(void)
{
	unsigned long int i, j, k, a, b, c, d;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	a = j / 1000000000;
	b = j % 1000000000;
	c = k / 1000000000;
	d = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", c + (d / 1000000000));
		printf("%lu", d % 1000000000);
		c = c + a;
		a = c - a;
		d = d + b;
		b = d - b;
	}

	printf("\n");

	return (0);
}
