#include "main.h"
/**
 * _puts_recursion - print a string followed by \n
 * @s: string value to be print
 * Author: Ermiyas Tesfaye
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
