#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Returns 0
 *
 */

int main(void)
{
	int digit_1, digit_2, digit_3;

	for (digit_1 = 0; digit_1 < 7; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 < 8; digit_2++)
		{
			for (digit_3 = digit_2 + 1; digit_3 < 9; digit_3++)
			{
				if (digit_1 == 7 && digit_2 == 8 && digit_3 == 9)
				{
					continue;
				}

				putchar(digit_1 + '0');
				putchar(digit_2 + '0');
				putchar(digit_3 + '0');

				if (digit_1 < 7 || digit_2 < 8 || digit_3 < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
