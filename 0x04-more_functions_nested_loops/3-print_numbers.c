#include "main.h"
/**
 * print_numbers - Print the number from 0 to 9
 * Return: void dosen't have return value
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
