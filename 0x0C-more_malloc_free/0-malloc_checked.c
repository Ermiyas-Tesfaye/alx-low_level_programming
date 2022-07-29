#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size_t value of malloc
 * Author: Ermiyas
 */
void *malloc_checked(unsigned int b)
{
	unsigned int i;
	void *str = malloc(b);

	if (str == NULL)
		exit(EXIT_FAILURE);
	return (str);
}
