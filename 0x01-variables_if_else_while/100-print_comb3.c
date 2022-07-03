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
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if (x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
