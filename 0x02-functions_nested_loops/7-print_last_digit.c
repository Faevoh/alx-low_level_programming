#include <stdio.h>
#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 * @d: inputed value
 *
 * Return: last digit of the number
 */

int print_last_digit(int d)
{
	int last_digit;

	last_digit = d % 10;

	if (d < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
