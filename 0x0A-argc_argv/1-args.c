#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments passed to the program
 * @argv: An array of strings contain the cmd line argmnts passed to program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

