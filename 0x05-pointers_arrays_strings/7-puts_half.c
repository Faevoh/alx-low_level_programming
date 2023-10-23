#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string variable
  * Return: 0
  */

void puts_half(char *str)
{
	int length = 0;
	int h, i;

	while (str[length] != '\0')
	{
		length++;
	}

	h = (length - 1) / 2;

	for (i = (h + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
