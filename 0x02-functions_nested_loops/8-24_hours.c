#include "main.h"
/**
 * jack_bauer - prints every minutes of the day of Jack Bauer
 *
 * Return: No return value
 */
void jack_bauer(void)
{
	int i = 0, j = 0, x = 0, y = 0;

	while (i < 3)
	{
		while (j < 10)
		{
			while (x < 7)
			{
				while (y < 10)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(x);
					_putchar(y);
					_putchar('\n');
					y++;
				}
				x++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
