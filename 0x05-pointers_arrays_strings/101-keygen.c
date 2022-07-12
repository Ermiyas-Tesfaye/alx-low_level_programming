#include "main.h"
/**
 * main - generate random valid password
 * Return: Always 0
 * Author: Ermiyas Tesfaye
 */
int main(void)
{
	int i = 0;
	char pass[15]

	while (i < 15)
	{
		pass[i] = 32 + rand() % 94;
		i++;
	}
	pass[i] = '\0';
	printf("%s\n", pass);
	return (0);
}
