#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size_t value of malloc
 * Return: the pointer
 * Author: Ermiyas
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
