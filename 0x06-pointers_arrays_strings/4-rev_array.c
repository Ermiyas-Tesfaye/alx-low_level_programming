#include "main.h"
/**
 * reverse_array - reverse the content of an array of int
 * @a: first array
 * @n: number of element
 *Return: No return value
 */
int reverse_array(int *a, int n)
{
	int *b;
	int i = 0;
	
	n--;
	while (0 <= n)
	{
		b[i] = a[n];
		n--;
		i++;
	}
	return (*b);
}
