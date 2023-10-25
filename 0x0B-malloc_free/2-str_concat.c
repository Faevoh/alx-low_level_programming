#include "main.h"
#include "stdlib.h"

/**
  *str_concat - oncatenates two strings
  *@s1: string variable 1
  *@s2: string variable 2
  *Return: returns concatenated strings
  */

char *str_concat(char *s1, char *s2)
{
	size_t len_1, len_2, a, final;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = 0;
	while (s1[len_1] != '\0')
	{
		len_1++;
	}

	len_2 = 0;
	while (s2[len_2] != '\0')
	{
		len_2++;
	}

	ptr = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (a = 0; a < len_1; a++)
	{
		ptr[a] = s1[a];
	}

	for (final = 0; final <= len_2; final++)
	{
		ptr[a] = s2[final];
		a++;
	}
	return (ptr);
}
