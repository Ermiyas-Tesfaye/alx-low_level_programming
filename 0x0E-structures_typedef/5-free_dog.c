#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that free a memory
 * @d: poiter of dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
