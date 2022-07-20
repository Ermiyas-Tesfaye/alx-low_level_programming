#include "main.h"
/**
 * sqrt2 - evaluate for guess values
 * @n: the natural number
 * @i: initial value
 * Return: the sqrt of n
 * Author: Ermiyas Tesfaye
 */
int sqrt2(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (sqrt2(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);

	return (-1);

}
/**
 * _sqrt_recursion - return the square root
 * @n: int value to be squer rooted
 * Return: final result
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else
		return (sqrt2(i, n));
}
