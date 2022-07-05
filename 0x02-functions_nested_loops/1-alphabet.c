#include "main.h"
/**
 * print_alphabet - Print all small letter alphabets
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
