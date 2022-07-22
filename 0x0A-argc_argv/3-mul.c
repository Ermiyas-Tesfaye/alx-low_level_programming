#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
