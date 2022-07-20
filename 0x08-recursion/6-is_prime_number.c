#include "main.h"
/**
 * prime_checker - evalute the number
 * @n: big number
 * @i: gess
 * Return: the checked value
 */
int prime_checker(int n, int i)
{
	if (i == n)
		return (0);
	if (n % i == 0)
		return (1);
	return (prime_checker(n, i + 1));
}
/**
 * is_prime_number - check for prime number
 * @n: is the number to be checked
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (prime_checker(n, i));
}
