#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: a string list to be chackes
 * Return: the number of byte in the initial seg
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count = 1;
		}
		if (count == 0)
			break;
	}
	return (i);
}
