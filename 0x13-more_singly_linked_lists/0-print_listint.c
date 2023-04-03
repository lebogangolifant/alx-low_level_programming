#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	for (node = h; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		count++;
	}

	return (count);
}
