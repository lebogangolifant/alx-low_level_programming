#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the head node of the list
 *
 * Return: the data stored in the head node that was deleted,
 *					or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *deleted_node;
	listint_t *current;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	deleted_node = *head;
	*head = (*head)->next;

	for (current = *head; current != NULL; current = current->next)
	{
		if (current->next == deleted_node)
		{
			current->next = deleted_node->next;
			break;
		}
	}

	free(deleted_node);

	return (data);
}
