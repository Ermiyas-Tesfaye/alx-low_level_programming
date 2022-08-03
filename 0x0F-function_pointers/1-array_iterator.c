#include "function_pointers.h"
/**
 * array_iterator - function that execute a fun given as parameter
 * @array: array elements
 * @size: size of array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
