#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints the name of the current file.
 *
 * Return: Returns 0
 */

int main(void)
{
	const char *filename = __FILE__;
	const char *basename = strrchr(filename, '/');

	if (basename)
	{
		filename = basename + 1;
	}
	printf("%s\n", filename);
	return (0);
}

