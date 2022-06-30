#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: ", sizeof(char charSize), " byte(s)\n");
	printf("Size of an int: ", sizeof(int intSize), " byte(s)\n");
	printf("Size of a long int: ", sizeof(long longSize), " byte(s)\n");
	printf("Size of a long long int: ", sizeof(long long longLong), " byte(s)\n");
	printf("Size of a float: ", sizeof(float floatSize), " byte(s)\n");
	return (0);
}
