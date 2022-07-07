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
		char ar[] = "01234567891011121314";

		while (index <= 19)
		{
			_putchar(ar[index]);
			index++;
		}
		_putchar('\n');
		i++;
	}
}
