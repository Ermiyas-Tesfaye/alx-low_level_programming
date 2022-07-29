#include "main.h"
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @b: intiger that determine string index for s2
 * Return: a pointer of the compined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int b)
{
	size_t i, j, x;
	char *str;

	i = strlen(s2);
	if (i > b)
		i = b;
	str = malloc(strlen(s1) + i + 1);
	if (str == NULL)
		exit(EXIT_FAILURE);
	for (j = 0; j < strlen(s1); j++)
		str[j] = s1[j];
	for (x = 0; x < i; x++)
	{
		str[j] = s2[x];
		j++;
	}
	str[j] = '\0';
	return (str);
}
