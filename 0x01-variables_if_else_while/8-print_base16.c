#include <stdio.h>
/**
 *  main - Prints all hexadecimal letter
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "0123456789abcdef";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	printf("\n");
	return (0);
}
