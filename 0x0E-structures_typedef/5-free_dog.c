#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (name)
		free(d->name);
	if (owner)
		free(d->owner);
	if (d)
		free(d);
}
