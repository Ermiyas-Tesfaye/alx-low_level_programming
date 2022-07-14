#include "main.h"
/**
 * *_strcat - concatinate two strings
 * @dest: the first string
 * @src: the second string
 * Return: dest
 * Author Ermiyas Tesfaye
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
