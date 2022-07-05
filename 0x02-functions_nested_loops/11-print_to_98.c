#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 *
 * @n: starting point
 */
void print_to_98(int n)
{
	int target = 98;

	if (n < 98)
	{
		while (n != 98)
		{
			printf("%n, ", n);
			n++
		}
		printf("%d", target);
	}
	else if (n > 98)
	{
		while (n != 98)
		{
			printf("%n, ", n);
			n--;
		}
		printf("%d", target);
	}
	else
		printf("%d", n)
}
