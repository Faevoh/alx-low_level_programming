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
	while (s <= 2645)
	{
		k = rand() % 128;
		s += k;
		putchar(c);
	}
	putchar(2772 - s);

	return (0);
}
