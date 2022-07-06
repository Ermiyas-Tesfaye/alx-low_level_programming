#include <stdio.h>
/**
 * main - compute multiple of 3 and 5
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int value = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			value = value + num;
		num++;
	}
	printf("%d\n", value);
	return (0);
}
