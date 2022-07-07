#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 * Return: no return value
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = size - i;
			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			if (i == size)
				break;
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
