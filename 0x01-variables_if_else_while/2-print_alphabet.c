#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 *
 * Return: Returns 0
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
