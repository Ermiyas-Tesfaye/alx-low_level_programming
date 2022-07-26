#include "main.h"
/**
 * alloc_grid - a function return pointer to a 2 dimensional array of integers
 * @width: int value
 * @height: height value
 * Return: 2-D array if int
 * Author: Ermiyas
 */
int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		a[j] = malloc(sizeof(int) * width);
		if (a[j] == NULL)
		{
			free(a[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
