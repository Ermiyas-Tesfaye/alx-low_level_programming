#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: return 1 if c is Uppercase and 0 if it is lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
