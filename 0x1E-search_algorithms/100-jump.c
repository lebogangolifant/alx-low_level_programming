#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (right < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
				right, array[right]);
		if (array[right] >= value || right == size - 1)
			break;
		left = right;
		right += step;

		if (right >= size)
			right = size - 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
