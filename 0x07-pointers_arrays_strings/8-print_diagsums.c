#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * @a: int value
 * @size: size of the matrix
 * Author: Ermiyas Tesfaye
 */
void print_diagsums(int *a, int size)
{
	int i, j, c, d;
	int x = size - 1;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				c = c + a[i][j];
		}
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (j == x)
			{
				d = d + a[i][x];
				x--;
			}
		}
	printf("%d, %d\n", c, d);
}
