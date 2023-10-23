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

	srand(time(NULL));
	s = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);

	return (0);
}
