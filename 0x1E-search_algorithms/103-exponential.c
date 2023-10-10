#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
				array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, (bound < size) ? bound : size - 1);
	return (custom_binary_search(array, bound / 2,
			(bound < size) ? bound : size - 1, value));
}

/**
 * custom_binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @low: The starting index of the subarray
 * @high: The ending index of the subarray
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */

int custom_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
