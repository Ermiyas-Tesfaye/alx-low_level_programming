#include <stdio.h>
#include "main.h"
/**
 * get_bit - a fun.. that returnes the value of a bit at a given index
 * @n: the given intiger value
 * @index: index
 * Return: the value of bit or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	return (n & 1);
}
