#include "main.h"
/**
 * _puts - print a string
 * @str: string value
 * Return: non return value
 * Author: Ermiyas Tesfaye
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
