#include "lists.h"
/**
 * printstr - print string values
 * @str: string value
 */
void printstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);
}
