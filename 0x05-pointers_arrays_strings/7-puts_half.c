#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string value
 * Return: non return function
 * Author: Ermiyas Tesfaye
 */
void puts_half(char *str)
{
	int j, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	j = i / 2;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
