#include "main.h"
/**
 * print_times_table - prints n time table
 *
 * @n: variable for time table
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, j, res;

		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res = (i * j);
				if (res > n)
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
					_putchar(res + '0');
				if (j != n)
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
}
