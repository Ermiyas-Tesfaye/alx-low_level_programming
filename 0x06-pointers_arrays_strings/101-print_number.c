#include "main.h"
/**
 * print_number - print an intiger
 * @n: integer value
 * Author: Ermiyas
 */
void print_number(int n)
{
	while (n != 0)
	{
		_putchar((n % 10) + '0')
	}
}
