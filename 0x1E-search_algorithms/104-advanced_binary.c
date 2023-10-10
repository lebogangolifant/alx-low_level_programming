#include "search_algos.h"

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 * array of integers using advanced binary search
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the first occurrence of the value is located,
 * or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, left, right, value));
}

/**
 * advanced_binary_recursive - Recursive helper function
 * @array: A pointer to the first element of the array to search in
 * @left: The left index of the current subarray
 * @right: The right index of the current subarray
 * @value: The value to search for
 *
 * Return: The index where the first occurrence of the value is located,
 * or -1 if not found
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive
						(array, left, mid, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binary_recursive
					(array, mid + 1, right, value));
		} else
		{
			return (advanced_binary_recursive
					(array, left, mid - 1, value));
		}
	}
	return (-1);
}
