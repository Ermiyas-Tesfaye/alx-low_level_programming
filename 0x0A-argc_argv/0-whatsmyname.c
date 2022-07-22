#include <stdio.h>
/**
 * main - main finction to print it's name
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
