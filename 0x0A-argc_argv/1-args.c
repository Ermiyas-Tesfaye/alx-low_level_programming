#include <stdio.h>
/**
 * main - program that prints the number of arguments passed tnto it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main (int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	else
		printf("0");
	return (0);
}
