#include <stdio.h>
/**
 * main - Prints the first 50 Fibonachi number
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int index = 0;
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long temp = 0;
	unsigned long ar[49];

	ar[index] = 1;
	index++;
	ar[index] = 2;
	index++;
	while (index < 50)
	{
		temp = f1 + f2;
		ar[index] = temp;
		f1 = f2;
		f2 = temp;
		index++;
	}
	while (i < index)
	{
		printf("%lu, ", ar[i]);
		i++;
	}
	printf("%lu\n", ar[index]);
	return (0);
}