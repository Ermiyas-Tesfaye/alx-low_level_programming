#include "main.h"
/**
 * _isalpha - This will check the character wether it is alphabet or not
 *
 * @c: is a character to be check
 *
 * Return: either 0 or 1
 */
int _isalpha(int c)
{
	int i = 0;

	if ((c >= 65 && c < 96) || (c >= 97 && c <= 122))
		i++;
	return (i);
}
