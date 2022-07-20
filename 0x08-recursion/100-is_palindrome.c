#include "main.h"
/**
 * _strlen - retern string len
 * @s: string value
 * Return: length of the string
 */
_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - check for string is palindrome or not
 * @s: the string to be checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (_strlen(s) == 0 || _strlen(s) == 1)
		return (1);
	else if (*s == *(s + (_strlen(s) - 1)))
		return (is_palindrome(s + 1));
	return (0);
}
