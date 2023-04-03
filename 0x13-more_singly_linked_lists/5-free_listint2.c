#include "lists.h"

/**
 * free_listint2 - frees a linked list of integers and sets the head to NULL
 * @head: a pointer to a pointer to the head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL)
		return;

	for (current = *head; current != NULL; current = tmp)
	{
		tmp = current->next;
		free(current);
	}

	*head = NULL;
}

