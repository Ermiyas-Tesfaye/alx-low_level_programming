#include <stdio.h>
/**
 *  main - Prints alphabet in lowercase letters
 *
 *  Return: Always (Success)
 */
int main(void)
{
	for (char i = 'z'; i >= 'a'; i--)
		putchar(i);
	printf("\n");
	return (0);
}
