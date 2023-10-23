#include "main.h"

/**
  * rev_string - reverses a string
  * @s: placeholder variable
  * Return: 0
  */

void rev_string(char *s)
{
	char temp;
	int len, j;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len /2; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
