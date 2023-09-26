#include <stdio.h>
#include "main.h"

/**
  * print_sign - Prints the sign of an inputed number
  * @n: expected variablename of the inputed number
  *
  * Return: 1, 0, -1 on success and error if specified
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
		_putchar(48);
		return (0);
}
