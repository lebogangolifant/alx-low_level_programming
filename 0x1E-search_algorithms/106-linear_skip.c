#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);

	current = list;
	express = NULL;

	while (current)
	{
		express = current->express;
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);

		if (!express || express->n >= value)
		{
			if (!express && current->n < value)
			{
				while (current->next)
					current = current->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
					current->index, express ?
					express->index : current->index);
			while (current && current->index <=
					(express ? express->index :
					 current->index))
			{
				printf("Value checked at index [%lu] = [%d]\n",
						current->index, current->n);
				if (current->n == value)
					return (current);
				current = current->next;
			}
			break;
		}
		current = express;
	}
	return (NULL);
}
