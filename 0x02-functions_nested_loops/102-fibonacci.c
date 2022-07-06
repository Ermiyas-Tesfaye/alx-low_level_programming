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
	long long f1 = 1;
	long long f2 = 2;
	long long temp = 0;
	long long ar[49];

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
	while (i <= index)
	{
		printf("%d, ", ar[i]);
		i++;
	}
	printf("\n")
	return (0);
}
