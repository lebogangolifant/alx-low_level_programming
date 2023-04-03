#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head node of the list.
 **/

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	for (current = head; current != NULL; current = next)
	{
		next = current->next;
		free(current);
	}
}

