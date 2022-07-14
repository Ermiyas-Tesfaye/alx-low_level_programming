#include "main.h"
/**
 * _strcmp - function that compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 or -ve or -ve value
 */
int _strcmp(char *s1, char *s2)
{
	char *st_1 = s1;
	char *st_2 = s1;

	while (*st_1 != '\0' && *st_2 != '\0' && *st_1 == *st)
	{
		st_1++;
		st_2++;
	}
	return (*st_1 - *st_2);
}
