#include "main.h"
/**
 * *_strncpy - a function copies a string
 * @dest: destination string
 * @src: the source string
 * @n: int value
 * Return: copy
 * Author: Ermiyas Tesfaye
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
