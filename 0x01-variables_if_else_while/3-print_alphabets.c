#include <stdio.h>
#include <ctype.h>
/**
 *  main - Prints alphabet in lowercase letters
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		putchar(toupper(str[i]));
		i++;
	}
	printf("\n");
	return (0);
}
