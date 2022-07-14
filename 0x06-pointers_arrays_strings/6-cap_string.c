#include "main.h"
/**
 * cap_string - capitalize all word of a string
 * @s: string value
 * Return: char value
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	int ar[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		if (i == 0)
			s[i] = s[i] - 32;
		else
		{
			for (j = 0; j <= 12; j++)
			{
				if (ar[j] == s[i] - 1)
				{
					if (s[i] >= 'a' && s[i] <= 'z')
						s[i] = s[i] - 32;
				}
			}
		}
	i++;
	}
	return (s);
}
