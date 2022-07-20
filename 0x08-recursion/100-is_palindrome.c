#include "main.h"
/**
* _strlen_recursion - retern the length of the string
* @s: string value
* Return: length of the string
* Author: Ermiyas
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
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
	if (*s == *(s + l))
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
