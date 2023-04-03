#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @h: pointer to pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*h == NULL)
		return (-1);

	current = *h;
	if (index == 0)
	{
		*h = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
