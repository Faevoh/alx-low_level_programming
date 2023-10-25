#include "main.h"
#include <stdlib.h>

/**
  *_strdup - return a pointer to a newly allocated space
  *@str: initial input string
  *Return: pointer to the memory allocated
  *which is an array of characters
  */

char *_strdup(char *str)
{
	size_t k, l;
	char *str_out;

	if (str == NULL)
		return (NULL);

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}

	str_out = (char *)malloc(sizeof(char) * (k + 1));

	if (str_out == NULL)
		return (NULL);

	for (l = 0; l <= k; l++)
	{
		str_out[l] = str[l];
	}
	return (str_out);
}
