#include "main.h"
/**
 * *_strncat - concatinate two strings
 * @dest: first string
 * @src: second string
 * @n: it will use at most n bytes fro src
 * Return: dest
 * Author: Ermiyas T
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
