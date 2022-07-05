#include "main.h"
/**
 * print_sign -print sign of the number
 *
 * @n: the number to be checked
 *
 * Return: 1 for positive 0 for zero and -1 for negitive
 */
int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	else
		_putchar('0');
	return (i);
}
