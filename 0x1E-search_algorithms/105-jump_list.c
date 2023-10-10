#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 * using Jump search
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i;
	listint_t *current = list;
	listint_t *prev = NULL;

	if (!list)
		return (NULL);

	while (current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (!current->next)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
