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
	unsigned long int visited_nodes[1024] = {0};
	int index;

	for (current = head; current; current = current->next)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;

		index = (unsigned long int) current % 1024;
		if (visited_nodes[index] != 0)
		{
			printf("-> [%p] %d\n", (void *) current->next,
					current->next->n);
			exit(98);
		}

		visited_nodes[index] = (unsigned long int) current;
	}

	return (count);
}

