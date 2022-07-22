#include "main.h"
/**
 * _islower - Check the character is small letter or not
 *
 * Return: 0 if not lowercase and 1 if it is lowercase
 *
 * @c: Parameter to be returned
 */
int _islower(int c)
{
	int i = 0;

	if (c >= 97 && c <= 122)
		i++;
	return (i);
}
