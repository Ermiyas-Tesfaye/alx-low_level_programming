#include "main.h"
/**
 * *_strcpy - copy the string pointer
 * @dest: the returned value
 * @src: ponted value
 * Return: dest
 * Author: Ermiyas Tesfaye
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
