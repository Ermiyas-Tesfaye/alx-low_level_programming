#include <stdio.h>
/**
 * main - program that prints the number of arguments passed tnto it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main (int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
