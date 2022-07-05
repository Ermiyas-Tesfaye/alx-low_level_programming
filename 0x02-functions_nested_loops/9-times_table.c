#include "main.h"
/**
 * times_table - shows the time table
 *
 * Return: time table
 */
void times_table(void)
{
	int rone = 0;

	while (rone <= 9)
	{
		int cone = 0;

		while (cone <= 9)
		{
			int d;

			d = rone * cone;
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			_putchar((d % 10) + '0');
			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(' ');
			cone++;
		}
		_putchar('\n');
		rone++;
	}
}
