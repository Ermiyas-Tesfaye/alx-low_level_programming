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
	int l, i;

	l = 0;
	while (s[l] != '\0')
		l++;
	for (i = 0; i <= l; i++, s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
