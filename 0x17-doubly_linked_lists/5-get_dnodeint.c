#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx;

	for (current = head, idx = 0; current != NULL;
			current = current->next, idx++)
	{
		if (idx == index)
			return (current);
	}

	return (NULL);
}

