#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: Given array
 * @size: number of element in array
 * @cmp: function pointer
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
