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
	long f1 = 1;
	long f2 = 2;
	long temp = 0;
	long ar[49];

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
		printf("%ld, ", ar[i]);
		i++;
	}
	printf("%ld\n", ar[index]);
	return (0);
}
