#include "main.h"

/**
  * _strlen_recursion - prints the length of a string
  * @s: string variable
  * Return: 0
  */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
