#include "main.h"
#include <string.h>
/**
 * binary_to_uint - a fun.. that convert binary number to unsigned int
 * @b: char to convert
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, temp, pow = 1, val;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] == '0')
			val = 0;
		else if (b[i] == '1')
			val = 1;
		else
			return (0);
		temp = val * pow;
		pow *= 2;
		num += temp;
	}
	return (num);
}
