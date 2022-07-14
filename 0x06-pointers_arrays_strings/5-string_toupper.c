#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - change lower case to uppercase
 * Return: Upper
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
