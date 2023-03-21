#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog struct
 *
 * @d: Pointer to dog struct to be freed
 *
 * This function frees the memory allocated for a dog struct.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

