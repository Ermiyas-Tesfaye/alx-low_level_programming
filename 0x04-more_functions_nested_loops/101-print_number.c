#include "main.h"
/**
 * print_number - function that prints an intiger
 * @n: intiger value
 */
void print_number(int n)
{
	if (n < 0)
	{
		if (n < 10)
		{
			n = n % 10;
			_putchar(n + '0');
		}
		else if (n < 100)
		{	
			int n1 = n / 10;
			_putchar(n1 + '0');
			n = n % 10;
			_putchar(n + '0');
		}
		else if (n < 1000)
		{
			int n2 = n / 100;
			_putchar(n2 + '0');
			int n1 = (n / 10) % 10;
			_putchar(n1 + '0');
			n = n % 10;
			_putchar(n + '0');
		}	
	}
	_putchar(n % 10 + '0');
}
