#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the natural number
 * @a: int of n
 * @b: int of 1
 * sqrt2 - chake for guss
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
int _sqrt_recursion(int n)
{
	int i = 0;
	if (n < 0)
		return (-1);
	else
		return (sqrt2(i, n));
}
