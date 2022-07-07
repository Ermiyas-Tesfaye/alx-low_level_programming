#include "main.h"
/**
 * more_numbers - print 10 times from 0 to 14
 * Return: no return value
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int index = 0;
		int ar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

		while (index <= 14)
		{
			_putchar(ar[index]);
			index++;
		}
		_putchar('\n');
		i++;
	}
}
