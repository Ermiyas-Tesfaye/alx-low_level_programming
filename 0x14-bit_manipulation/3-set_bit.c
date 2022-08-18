#include "main.h"
/**
 * set_bit - a fun.. sets the value of a bit to 1
 * @n: pointer to int value
 * @index: index to be set 1
 * Return: 1 in success and -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n += 1 << index;
	return (1);
}
