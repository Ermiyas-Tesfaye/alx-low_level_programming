#include <stdio.h>
/**
 *  main - Prints two digites in different form
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int x, y, z, w;

	x = 48;
	while (x <= 57)
	{
		y = 48;
		while (y <= 57)
		{
			z = 48;
			while (z <= 57)
			{
				w = 48;
				while (w <= 57)
				{
					if (((z + w) > (x + y) && z >= x) || x < z)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(w);
						if (x + y + z + w == 227 && x == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					w++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
