#include "main.h"
/**
 * print_square - Squere of a character
 * @size: size of the char
 * Return: non return
 */
void print_square(int size)
{
	int hor, ver;

	if (size > 0)
	{
		hor = 0;
		while (hor < size)
		{
			ver = 0;
			while (ver < size)
			{
				_putchar('#');
				ver++;
			}
			_putchar('\n');
			hor++;
		}
	}
	else
		_putchar('\n');
}
