#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;

	count += cents / 25;
	cents %= 25;
	count += cents / 10;
	cents %= 10;
	count += cents / 5;
	cents %= 5;
	count += cents / 2;
	cents %= 2;
	count += cents;

	printf("%d\n", count);
	return (0);
}

