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
	long int tot = 0;
	long int f1 = 1;
	long int f2 = 2;
	long int temp = 0;
	long int ar[50];

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
		if (ar[i] !> 4000000)
			tot = tot + ar[i];
		i++;
	}
	printf("%ld\n", tot);
	return (0);
}
