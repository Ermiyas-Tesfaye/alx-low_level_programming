#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size_t value of malloc
 * Return: the pointer
 * Author: Ermiyas
 */
void *malloc_checked(unsigned int b)
{
	unsigned int i;
	void *str = malloc(b + 1);

	if (str == NULL)
		exit(98);
	return (str);
}
