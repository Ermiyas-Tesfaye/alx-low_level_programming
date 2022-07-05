#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_purchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
