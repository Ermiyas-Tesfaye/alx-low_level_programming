#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars, and init it with a specific char
 * @size: size of the memory
 * @c: variable value for each value
 * Return: Null if size = 0, or a pointer
 * Author: Ermiyas Tesfaye
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
	else
		return (NULL);
}
