#include <stdio.h>
/**
 * main - a program that print the largest prime factor of a number
 * Return: always 0
 */
int main(void)
{
	int largest = 2;

	int long num = 612852475143;

	while (num > 1)
	{
		while (num % largest == 0)
		{
			num = num / largest;
		}
		largest++;
	}
	printf("%d", largest - 1);
	return (0);
}
