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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
