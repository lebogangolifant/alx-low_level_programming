#include "main.h"

/**
 * main - Multiplies two numbers provided as command line arguments.
 * @argc: The number of arguments provided.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
