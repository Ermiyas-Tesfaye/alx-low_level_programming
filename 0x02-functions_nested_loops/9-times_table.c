#include "main.h"
/**
 * times_table - shows the time table
 *
 * Return: time table
 */
void times_table(void)
{
	int i, j, res;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			res = (i * j);
			if (res > 9)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
				_putchar(z + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
