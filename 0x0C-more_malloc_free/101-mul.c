#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
