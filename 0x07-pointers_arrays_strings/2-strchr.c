#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string value
 * @c: the char value
 * Return: string starting from @c char
 * Author: Ermi
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	return (s + i);
}
