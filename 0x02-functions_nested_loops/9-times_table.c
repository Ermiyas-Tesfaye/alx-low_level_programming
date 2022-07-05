#include "main.h"
/**
 * time_table - shows the time table
 *
 * Return: time table
 */
void time_table(void)
{
	int rone = 0;

	while (rone <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		int cone = 0;

		while (cone <= 9)
		{
			int d;

			d = rone * cone;
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
				_putchar(' ');
			_putchar((d % 10) + '0');
			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			cone++;
		}
		_putchar('\n');
		rone++;
	}

}
