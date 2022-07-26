#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a new string or NULL value
 * Author: Ermiyas
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *ptr = malloc(sizeof(s1) + sizeof(s2));

	for (i = 0; i < (sizeof(s1) + sizeof(s2)); i++)
	{
		while (*(s1) != '\0')
			ptr[i] = *s1;
		while (*(s2) != '\0')
			ptr[i] = *s2;
		s1++;
		s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
