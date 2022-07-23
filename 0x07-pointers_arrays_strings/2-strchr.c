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
	char *x;
	int i = 0;
	int j = 0;

	if (s[i] == '\0')
		x[j] = s[i];
	else if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				break;
			}
			i++;
		}
		while (s[i] != '\0')
		{
			x[j] = s[i];
			i++;
			j++;
		}
		x[j] = '\0';
	}
	return (x);
}
