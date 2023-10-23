#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string placeholder
  * Return: 0
  */

int _strlen(char *s)
{
	int char_counter;

	char_counter = 0;
	while (s[char_counter] != '\0')
	{
		char_counter++;
	}
	return (char_counter);
}
