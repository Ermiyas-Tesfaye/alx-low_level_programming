#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int ret = 0;
	int n, count = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n < 0)
			printf("0\n");
		else
		{
			while (n > 0)
			{
				if (n >= 25)
					n -= 25;
				else if (n >= 10)
					n -= 10;
				else if (n >= 5)
					n -= 5;
				else if (n >= 1)
					n -= 1;
				count++;
			}
			printf("%d\n", count);
		}
	}
	else
	{
		printf("Error\n");
		ret = 1;
	}
	return (ret);
}
