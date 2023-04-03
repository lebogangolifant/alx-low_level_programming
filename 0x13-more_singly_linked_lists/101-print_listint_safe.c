#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a listint_t list safely
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	for (current = head; current; current = current->next, count++)
	{
		printf("[%p] %d\n", (void *) current, current->n);

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *) current->next,
					current->next->n);
			exit(98);
		}
	}
	return (count);
}

