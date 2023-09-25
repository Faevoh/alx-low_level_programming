#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - Prints the alphabets 10 times
  *
  * Return: 0 on success
  */

void print_alphabet_x10(void)
{
	char x;
	int j;

	j = 0;
	while (j < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');
		j++;
	}
}
