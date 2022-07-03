#include <stdio.h>
/**
 *  main - Prints all decimal numbers for 0 to 10
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
