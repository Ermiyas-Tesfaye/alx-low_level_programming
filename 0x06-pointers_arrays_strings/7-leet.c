#include "main.h"
/**
 * leet - encode string into 1337
 * @s: the string value
 * Return: a string char
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	int l_c[] = {97, 101, 111, 116, 108};
	int u_c[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == l_c[j] || *(s + i) == u_c[j])
			{
				*(s + i) = numbers[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
