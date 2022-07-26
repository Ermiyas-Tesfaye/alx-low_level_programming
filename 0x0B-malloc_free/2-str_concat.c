#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: first string
 * @s2: second string
 * Return: a new string or NULL value
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = (char *)malloc(sizeof(char) * i + sizeof(char) * j + 1);
	if (ptr == NULL)
		return (NULL);
	l = i + j;
	j = 0;
	while (x < i)
	{
		ptr[x] = s1[x];
		x++;
	}
	while (x < l)
	{
		ptr[x] = s2[j];
		x++;
		j++;
	}
	ptr[x] = '\0';
	return (ptr);
}
