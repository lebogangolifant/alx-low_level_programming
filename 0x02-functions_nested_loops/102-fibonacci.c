#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers.
  *
  * Return: Nothing.
  */

int main(void)
{
	long int i, j, k, sum;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		sum = j + k;
		j = k;
		k = sum;
	}

	return (0);
}
