#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	for (; current != NULL; prev = current, current = next)
	{
		next = current->next;
		current->next = prev;
	}

	*head = prev;
	return (*head);
}

