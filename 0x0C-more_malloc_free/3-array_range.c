#include "main.h"
#include <stdlib.h>

/**
  *array_range - create an array of integers
  *@min:min value
  *@max: max value
  *Return: pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int a, b;
	int *i;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	i = malloc(sizeof(int) * b);
	if (i == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		i[a] = min;
		min++;
	}
	return (i);
}
