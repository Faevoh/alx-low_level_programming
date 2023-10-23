#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generate random passwords
  *
  * Return: 0
  */

int main(void)
{
	int s;
	char k;
	int final;

	srand(time(NULL));
	s = 0;
	while (s <= 2645)
	{
		k = (rand() % 94) + 32;
		s += k;
		putchar(k);
	}

	final = 2772 -s;
	if (final < 32 || final > 126) 
	{
		final = 'A';
	}
	putchar(final);

	return (0);
}
