#include "main.h"
/**
 * jack_bauer - prints every minutes of the day of Jack Bauer
 *
 * Return: No return value
 */
void jack_bauer(void)
{
	char i = '0';

	while (i < '3')
	{
		char j = '0';

		while (j <= '9')
		{
			if (i != '2' || j != '4')
			{
				char x = '0';

				while (x < '6')
				{
					char y = '0';

					while (y <= '9')
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
		}
		i++;
	}
}
