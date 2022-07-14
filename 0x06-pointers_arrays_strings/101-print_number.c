#include "main.h"
/**
 * print_number - print an intiger
 * @n: integer value
 * Author: Ermiyas
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	count = 1;
	while (d > 9)
	{
		d /= 10;
		count *10;
	}
	for (; count >= 1; cout /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
