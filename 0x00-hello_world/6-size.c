#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(int));
	printf("Size of an int: ", sizeof(intSize), " byte(s)\n");
	printf("Size of a long int: ", sizeof(longSize), " byte(s)\n");
	printf("Size of a long long int: ", sizeof(longLongSize), " byte(s)\n");
	printf("Size of a float: ", sizeof(floatSize), " byte(s)\n");
	return (0);
}
