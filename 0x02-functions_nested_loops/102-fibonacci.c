#include <stdio.h>

/**
  * main - prints first 50 fibonacci numbers
  *
  * Return: Always 0
  */

int main(void)
{
	int i;
	long int num[50];

	num[0] = 1;
	num[1] = 2;

	printf("%ld, %ld, ", num[0], num[1]);

	for (i = 2; i < 50; i++)
	{
		num[i] = num[i - 1] + num[i - 2];

		if (i == 49)
		{
			printf("%ld\n", num[i]);
		}
		else
		{
			printf("%ld, ", num[i]);
		}
	}
	return (0);
}
