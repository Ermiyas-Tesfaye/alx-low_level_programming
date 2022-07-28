#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: range minimum value
 * @max: range maximum value
 * Return: the pointer to the newly created array
 * Author: Ermiyas
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	diff = max - min;
	for (i = 0; i <= diff; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
