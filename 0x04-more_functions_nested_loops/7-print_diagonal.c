#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the char \ should be printed
 * Return: non return function
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		len = 0;
		while (len < n)
		{
			space = 0;
			while (space < len)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			len++;
		}
	}
	else
		_putchar('\n');
}
