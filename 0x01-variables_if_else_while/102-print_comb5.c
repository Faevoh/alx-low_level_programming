#include <stdio.h>

/**
  * main - Prints all possible combinations of two two-digit numbers
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			putchar('0' + x / 10);
			putchar('0' + x % 10);
			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);

			if (x != 99 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
