#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string value
 * @c: the char value
 * Return: string starting from @c char
 * Author: Ermi
 */
char *_strchar(char *s, char c)
{
	char *str;
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
			break;
		}
		i++;
	}
}
