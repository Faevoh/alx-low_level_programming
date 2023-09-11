#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int d;

	for (i = 0; i <= 8; i++)
	{
		for (d = i + 1; d <= 9; d++)
		{
			putchar('0' + i);
			putchar('0' + d);

			if (i != 8 || d != 9)
			{

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
