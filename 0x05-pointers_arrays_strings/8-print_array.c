#include "main.h"
/**
 * print_array - print n element of array of integer
 * @a: first integer
 * @n: second integer
 * Author: Ermiyas Tesfaye
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
