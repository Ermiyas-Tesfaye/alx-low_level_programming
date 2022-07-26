#include "main.h"
#include <stdlib.h>
/**
 * _size - returns the size of a string
 * @s: string value
 * Return: size
 */
int _size(char *s)
{
	int j = 0;
	int i = 0;

	while (*s != '\0' && *s != NULL)
	{
		j++;
		i++;
		s++;
	}
	while (i != 0)
	{
		i--;
		s--;
	}
	return (j);
}
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a new string or NULL value
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x;
	char *ptr;

	i = _size(s1);
	j = _size(s2);
	ptr = (char *)malloc(i + j);
	for (x = 0; x < (i + j); x++)
	{
		while (*s1 != '\0')
		{	
			if (*s1 == NULL)
			{	
				ptr[x] = "";
				break;
			}
			ptr[x] = *s1;
			s1++;
		}
		while (*s2 != '\0')
		{	
			if (*s2 == NULL)
			{	
				ptr[x] = "";
				break;
			}
			ptr[x] = *s2;
			s2++;
		}
	}
	ptr[x] = '\0';
	return (ptr);
}
