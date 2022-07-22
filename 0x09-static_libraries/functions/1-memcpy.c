#include "main.h"
/**
 * _memcpy - the function that copy memory area
 * @dest: destination area
 * @src: source address
 * @n: integer n
 * Return: a pointer to dest
 * Author: Ermiyas Tesfaye
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
