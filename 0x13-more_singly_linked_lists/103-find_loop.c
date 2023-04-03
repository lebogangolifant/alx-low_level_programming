#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts, or NULL
 *			if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);

	for (slow = head, fast = head; fast && fast->next; )
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			for (fast = head; slow != fast; slow = slow->next,
					fast = fast->next)
				;
			return (slow);
		}
	}
	return (NULL);
}

