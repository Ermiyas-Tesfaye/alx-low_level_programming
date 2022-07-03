#include <stdio.h>
/**
 *  main - Prints all decimal numbers for 0 to 10
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
