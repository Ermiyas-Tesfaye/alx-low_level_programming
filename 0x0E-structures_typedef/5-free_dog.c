#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that free a memory
 * @d: poiter of dog struct
 */
void free_dog(dog_t *d)
{
	free(d);
	free(new_dog);
}
