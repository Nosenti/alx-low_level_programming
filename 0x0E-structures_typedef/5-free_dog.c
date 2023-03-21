#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to allocate memory
 * @d: pointer to access struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
