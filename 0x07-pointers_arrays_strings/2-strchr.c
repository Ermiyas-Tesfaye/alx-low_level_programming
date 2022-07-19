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
	unsigned int i = 0;

	if (s[i] == '\0')
		return (s[i]);
	if else (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				return (s[i]);
				break;
			}
			i++;
		}
	}
	else
		return ('\0');
}
