#include "main.h"
#include <stdlib.h>

/**
  *create_array - create an array of characters
  *@size: an input for the size of the array in int
  *@c: to store strings
  *Return: a pointer to the base character c
  */

char *create_array(unsigned int size, char c)
{
	size_t j;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
