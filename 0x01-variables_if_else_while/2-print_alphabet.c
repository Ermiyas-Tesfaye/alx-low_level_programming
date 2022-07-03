#include <stdio.h>
/**
 *  main - Prints alphabet in lowercase letters
 *
 *  Return: Always (Success)
 */
int main(void)
{
	for (int i = "A"; i <= "Z"; i++)
	{
		putchar(tolower(i));
	}
	return (0);
}
