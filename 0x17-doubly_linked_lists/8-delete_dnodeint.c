#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *node_to_delete;
	unsigned int idx;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (idx = 0; idx < index - 1 && current != NULL; idx++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current;
	free(node_to_delete);
	return (1);
}
