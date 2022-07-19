#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the first string
 * @needle: the second string
 * Return: a pointer to the beginning of the located substring
 * Author: Ermiyas
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (((haystack + j) != '\0') && ((needle + i) != '\0'))
	{
		if ((needle + i) != (str + j))
		{
			j++;
			i = 0;
		}
		else 
		{
			i++;
			j++;
		}
	}
	if ((substr + i) == '\0')
		return (1);
	else
		return (-1);
}
