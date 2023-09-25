#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Expected tp print alphabets in lowercase
  *
  * Return: 0 on success.
  */

void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
