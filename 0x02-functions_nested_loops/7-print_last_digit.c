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
	int lastDigit;

	if (c < 0)
	{
		c = c * -1;
		lastDigit = c % 10;
	}
	else
		lastDigit = c % 10;
	return (lastDigit);
}
