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
	while (i <= 0)
	{
		j = 0;
		while (j <= 9)
		{
			res = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
