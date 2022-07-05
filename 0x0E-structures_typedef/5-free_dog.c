#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free instance of struct dog
 * @d: instance to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
