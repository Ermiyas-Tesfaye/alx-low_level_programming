#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char charSize;
	int intSize;
	long longSize;
	long long longLongSize;
	float floatSize;
	printf("Size of a char: ", sizeof(charSize), " byte(s)\n");
	printf("Size of an int: ", sizeof(intSize), " byte(s)\n");
	printf("Size of a long int: ", sizeof(longSize), " byte(s)\n");
	printf("Size of a long long int: ", sizeof(longLongSize), " byte(s)\n");
	printf("Size of a float: ", sizeof(floatSize), " byte(s)\n");
	return (0);
}
