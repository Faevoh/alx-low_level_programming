#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates all program arguments
  *@ac: argument count
  *@av: argument vector
  *Return: a pointer to a new string
  */

char *argstostr(int ac, char **av)
{
	char *arg_out;
	int a, b, c = 0, d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	arg_out = malloc(sizeof(char) * d + 1);
	if (arg_out == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			arg_out[c] = av[a][b];
			c++;
		}
		if (arg_out[c] == '\0')
		{
			arg_out[c++] = '\n';
		}
	}
	return (arg_out);
}
