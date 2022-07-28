#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc
 * @ptr: pre-defined memory allocated value
 * @old_size: old size of ptr
 * @new_size: new size using realloc
 * Return: a re allocated pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = ptr[i];
		free(ptr);
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = ptr[i];
		free(ptr);
	}
	return (new_ptr);
}
