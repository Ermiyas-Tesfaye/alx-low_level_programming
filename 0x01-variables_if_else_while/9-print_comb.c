#include <stdio.h>
/**
 *  main - Prints all decimal numbers for 0 to 9
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
