#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: given string value
 * Return: NULL if 0
 */
char *_strdup(char *str)
{
	long unsigned int i;
	char *ptr = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < sizeof(str); i++)
			ptr[i] = str[i];
	}
	ptr[i] = '\0';
	free(ptr);
	return (ptr);
}
