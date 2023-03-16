#include "main.h"


/**
 * _calloc - Allocates memory for an array of elements, each with a given size.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb
 *				or size is 0 or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

