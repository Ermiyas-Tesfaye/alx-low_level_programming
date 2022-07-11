#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string value
 * REturn: non return function
 * Author: Ermiyas Tesfaye
 */
void rev_string(char *s)
{
	char c[] = s;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		s[j] = c[i];
		j++;
		i--;
	}
}
