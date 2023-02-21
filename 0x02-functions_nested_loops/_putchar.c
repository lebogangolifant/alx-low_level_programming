#include "main.h"
#include "unistd.h"

/**
 * _putchar - write the character c to stdout
 * @c: Prints the character
 *
 * Return: Returns 0
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
