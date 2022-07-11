#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string value
 * REturn: non return function
 * Author: Ermiyas Tesfaye
 */
void rev_string(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	char str[i];
	int j = 0;

	while (i >= 0)
	{
		str[j] = s[i];
		j++;
		i--;
	}
	*s = str;
}
