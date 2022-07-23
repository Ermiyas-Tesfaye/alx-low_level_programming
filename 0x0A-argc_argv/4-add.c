#include <stdio.h>
#include <stdlib.h>
/**
 * _isnumber - chacke for number
 * @str: string value from argv
 * @ptr: copy of argv value
 * Return: 1 if no success on 0 for success
 */
int _isnumber(char *str)
{
	int i = 1;

	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			i = 0;
		}
		str++;
	}
	return (i);
}
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
		if (_isnumber(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc > 1)
		printf("%d\n", sum);
	return (0);
}
