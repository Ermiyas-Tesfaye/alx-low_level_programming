#include "main.h"
/**
 * _abs - this will compute the absolute value of intiger number
 *
 * @c: the value to be checked
 *
 * Return: the positive number
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
		return (c);
}
