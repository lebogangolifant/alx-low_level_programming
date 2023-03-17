#include "main.h"

/**
 * multiply - Function to multiply two positive integers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: the result of the multiplication
 */

long multiply(long num1, long num2);

/**
 * main - Entry point of the program
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	int i, j;
	long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	result = multiply(num1, num2);
	printf("%ld\n", result);
	return (0);
}

/**
 * multiply - Function to multiply two positive integers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: the result of the multiplication
 */

long multiply(long num1, long num2)
{
	long result = 0;

	while (num2 > 0)
	{
		if (num2 % 2 == 1)
		{
			result += num1;
		}

		num1 <<= 1;
		num2 >>= 1;
	}

	return (result);
}
