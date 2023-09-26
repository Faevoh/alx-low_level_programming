#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of the inputed integer
 * @j: input values
 *
 * Return: Absolute value of integer
 */

int _abs(int j)
{
	if (j < 0)
	{
		int retValue;

		retValue = j * -1;
		return (retValue);
	}
	return (j);
}
