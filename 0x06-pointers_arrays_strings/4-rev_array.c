#include "main.h"
/**
 * reverse_array - reverse the content of an array of int
 * @a: first array
 * @n: number of element
 *Return: No return value
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
