#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - change lower case to uppercase
 * Return: Upper
 */
char *string_toupper(char *s)
{
	int length = strlen(s);
	int i = 0;
	
	for (i = 0; i < length; i++)
		s[i] = toupper(s[i]);
}
