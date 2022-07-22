#include <stdio.h>
#include <stdlib.h>
/**
 * main - main finction to print it's name
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
