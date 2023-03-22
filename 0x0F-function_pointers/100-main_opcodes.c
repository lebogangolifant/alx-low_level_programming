#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: 0 on success, non-zero on error
 *
 * This program prints the opcodes of its own main function.
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *main_ptr = (unsigned char *) &main;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i));
	}

	printf("\n");

	return (0);
}



