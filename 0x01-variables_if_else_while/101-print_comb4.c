#include <stdio.h>
/**
 *  main - Prints two digites
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		int y = '1';

		while (y <= '9')
		{
			int z = '2';

			while (z <= '9')
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != '7' || y != '8' || z != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
