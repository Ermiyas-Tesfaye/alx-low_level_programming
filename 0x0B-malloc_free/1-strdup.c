#include "main.h"
#include <stdlib.h>
/**
 * _size - returns the size of a string
 * @str: string value
 * Return: size of string
 */
int _size(char *str)
{
	int j = 0;

	while (*str != '\0')
	{
		j++;
		str++;
	}
	return (j);
}
/**
 * _strdup - return a pointer
 * @str: string value given
 * Return: Null if 0
 */
char *_strdup(char *str)
{
	int i;
	int j = _size(str);
	char *ptr = (char *)malloc(sizeof(char) * j + 1);

	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
