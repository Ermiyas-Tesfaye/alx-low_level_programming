#include "main.h"
/**
 * puts2 - prints every even index of a char
 * @str: the string value
 * Return: non return value
 * Author: Ermiyas Tesfaye
 */
void puts2(char *str)
{
	int j = 0, i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
