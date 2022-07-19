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
	int i, as, ds, c, d;

	c = 0;
	d = 0;
	ds = size - 1;
	for (i = 0; i < size; i++)
	{
		c += *(a + i * size + as);
		d += *(a + i * size + ds);
		as++;
		ds--;
	}
	printf("%d, %d\n", c, d);
}
