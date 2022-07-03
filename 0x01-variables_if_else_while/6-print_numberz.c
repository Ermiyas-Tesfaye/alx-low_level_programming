#include <stdio.h>
/**
 *  main - Prints all decimal numbers for 0 to 10
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int x = 0;
	char str[] = "0123456789";

	while (str[x])
		putchar(str[x]);
		x++;
	putchar('\n');
	return (0);
}
