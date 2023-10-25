#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - adds positive numbers
  *@argc: number of command line arguments
  *@argv: array of arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int l, a, sum = 0;

	for (l = 1; l < argc; l++)
	{
		for (a = 0; argv[l][a] != '\0'; a++)
		{
			if (!isdigit(argv[l][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[l]);
	}
	printf("%d\n", sum);
	return (0);
}
