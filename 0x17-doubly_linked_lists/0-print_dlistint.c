#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h != NULL; num_nodes++, h = h->next)
		printf("%d\n", h->n);

	return (num_nodes);
}
