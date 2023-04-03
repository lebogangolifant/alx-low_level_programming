#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head of list
 * Return: sum of all data (n) of linked list or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}

