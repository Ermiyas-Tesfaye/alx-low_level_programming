#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: a string list to be chackes
 * Return: the number of byte in the initial seg
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;
	bool found;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			found = 0;
			if (s[i] == accept[j])
			{	found = 1;
				break;
			}
			if (!found)
				break;
			else c++;
			j++;
		}
		i++;
	}
	return (c);
}
