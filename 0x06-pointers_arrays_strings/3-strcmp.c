#include "main.h"
/**
 * _strcmp - function that compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 or -ve or -ve value
 */
int _strcmp(char *s1, char *s2)
{
	int same = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			same = same + (s1[i] - s2[i]);
		i++;
	}
	return (same);
}
