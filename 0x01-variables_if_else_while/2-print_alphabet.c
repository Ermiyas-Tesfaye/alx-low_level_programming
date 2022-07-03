#include <stdio.h>
/**
 *  main - Prints alphabet in lowercase letters
 *
 *  Return: Always (Success)
 */
int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		int x = tolower(i);
		putchar(x);
	}
	return (0);
}
