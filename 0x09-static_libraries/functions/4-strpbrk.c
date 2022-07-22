#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to bechecked
 * @accept: a string to be checked with
 * Return: a pointer to the byte in s
 * Author: Ermiyas
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
				continue;
			else
			{
				num++;
				break;
			}
		}
		if (num != 0)
			return (s + i);
	}
	return (0);
}
