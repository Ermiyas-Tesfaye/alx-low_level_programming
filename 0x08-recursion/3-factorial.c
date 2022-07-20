#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: the calculated facctorial
 * Author: Ermiyas Tesfaye
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
