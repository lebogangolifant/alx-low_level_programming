#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: the matrix of integers
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0, sum1_digit, sum2_digit;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}

	do {
		sum1_digit = sum1 % 10;
		putchar(sum1_digit + '0');
		sum1 /= 10;
	} while (sum1 != 0);

	putchar(',');

	do {
		sum2_digit = sum2 % 10;
		putchar(sum2_digit + '0');
		sum2 /= 10;
	} while (sum2 != 0);

	putchar('\n');
}

