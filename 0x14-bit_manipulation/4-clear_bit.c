#include "main.h"
/**
 * clear_bit - a fun.. that set value bit to 0
 * @n: a pointer to long int value
 * @index: index to the bit to set 0
 * Return: 1 on success and -1 on failuer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1 << index;

	if (index > 64)
		return (-1);
	*n = ~(1 << index);
	return (1);
}
