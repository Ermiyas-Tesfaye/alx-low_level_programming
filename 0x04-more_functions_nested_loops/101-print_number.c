#include "main.h"
/**
 * print_number - function that prints an intiger
 * @n: intiger value
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		_putchar(n / 10);
	_putchar(n % 10 + '0');
}
