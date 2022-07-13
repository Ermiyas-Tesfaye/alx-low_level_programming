#include "main.h"
/**
 * *_strcat - concatinate two strings
 * @dest: the first string
 * @src: the second string
 * Author Ermiyas Tesfaye
 */
char *_strcat(char *dest, char *src)
{
	char *new;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		new[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		new[i] = src[j];
		i++;
		j++
	}
	new[i] = '\0';
	return (new);
}
