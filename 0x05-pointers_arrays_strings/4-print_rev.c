#include "main.h"

/**
  * print_rev - prints in reverse, followed by a new line
  * @s: variable placeholder
  * Return: 0
  */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	for (n--; n >= 0; n--)

	_putchar(s[n]);
	_putchar('\n');
}
