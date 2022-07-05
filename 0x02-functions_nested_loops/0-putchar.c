#include "main.h"
/**
 * main - Prints string character
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
