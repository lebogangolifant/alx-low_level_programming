#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 *						followed by a new line.
 * @a: int type array pointer
 * @n: int type integer
 *
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	for (n--; n >= 0; n--, index++)
	{
		printf("%d", a[index]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
