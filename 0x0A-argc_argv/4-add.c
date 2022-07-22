#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 if no error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if ()
			sum += atoi(argv[i]);
		else
		{
			printf("Error");
			return (1);
		}
	}
	return (0);
}
