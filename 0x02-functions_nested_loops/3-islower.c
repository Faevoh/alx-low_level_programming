#include <stdio.h>
#include "main.h"

/**
  * _islower - Checks for lowercase characters
  * @c: variable name for character inputs
  *
  * Return: 1 on success. But,0 if result is otherwise or error
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
