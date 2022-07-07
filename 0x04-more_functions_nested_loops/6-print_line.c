#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: number of time the character _ should be printed
 * Return: no return value
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
