#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	for (current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
