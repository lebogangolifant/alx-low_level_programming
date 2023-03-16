#include "main.h"

/**
 * array_range - creates an array of integers containing values from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: the pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	do {
		arr[i++] = min;

	} while (min++ < max);

	return (arr);
}
