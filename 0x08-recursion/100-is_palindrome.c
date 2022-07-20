#include "main.h"
/**
 * pl - palindrome
 * @s: pointer to string
 * @l: position
 * Return: 1 or 0
 */
int pl(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + 1))
		return (pl(s + 1, l - 2));
	return (0);
}
/**
 * is_palindrome - check for string is palindrome or not
 * @s: the string to be checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pl(s, len - 1));
}
