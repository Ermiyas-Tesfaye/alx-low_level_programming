#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(a, b);
	printf("%d\n", result);
	return (0);
}
