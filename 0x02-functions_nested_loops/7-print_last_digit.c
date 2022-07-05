#include "main.h"
/**
 * print_last_digit - this will print the last digit of a given number
 *
 * @c: the number to be checked
 *
 * Return: the number
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (n < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
