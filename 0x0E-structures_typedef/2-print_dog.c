#include "dog.h"
#include <stdio.h>
/**
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %f\n", d->age);
	else
		printf("Name: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
