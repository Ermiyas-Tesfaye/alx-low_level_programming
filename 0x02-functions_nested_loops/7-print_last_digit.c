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
	int j;

	j = c % 10;
	if (j < 0)
		j = j * -1;
	_putchar(j + '0');
	return (j);
}
