#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size_t value of malloc
 * Return: the pointer
 * Author: Ermiyas
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}