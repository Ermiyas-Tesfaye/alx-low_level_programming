#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of struct data type
 * @d: pointer of the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
