#include "main.h"
/**
 * rot13 - encrypts like Modified Cesar cipher
 * @s: string to be converted
 * Return: the encryped string
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (s[i] != '\n')
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
