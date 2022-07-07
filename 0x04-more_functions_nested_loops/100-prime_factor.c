#include <stdio.h>
/**
 * main - a program that print the largest prime factor of a number
 * Return: always 0
 */
int main(void)
{
	int long long largest;
	int long long num = 612852475143;

	largest = 2;
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
