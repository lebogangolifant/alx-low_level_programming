#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	for (current = *h; current != NULL; current = next)
	{
		count++;
		next = current->next;
		free(current);

		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
	}

	*h = NULL;
	return (count);
}

