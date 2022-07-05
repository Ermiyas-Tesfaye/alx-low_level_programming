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
	if (c < 0)
	{
		c = c * -1;
		c = c % 10;
	}
	_putchar(c + c);
	return (c);
}
