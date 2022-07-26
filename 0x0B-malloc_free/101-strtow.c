#include "main.h"
/**
 * strtow - a function that splits a string into words
 * @str: string value
 * Return: pointer to an array of string
 */
char **strtow(char *str)
{
	int m, c, k;
	int i = 1, z = 1;
	char **s;

	if (str == NULL || *str == "")
		return (NULL);
	while (*str[i - 1] == " " && str[i] != '\0')
		i++;
	s = malloc(sizeof(int *) * i);
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		m = 1;
		while (*str[z - 1] != " " && *str[z] != " " && str[z] != '\0')
		{
			if (str[z + 1] == " ")
			{
				z++;
				m++;
				break;
			}
		}
		s[k] = malloc(sizeof(char) * m);
		if (s[k] == NULL)
			return (NULL);
		c = 0;
		while (l < z)
		{
			while (str[l - 1] != " ")
			{
				l++;
				s[k][c] = str[l];
				c++;
			}
		}
	}
	return (s);
}
