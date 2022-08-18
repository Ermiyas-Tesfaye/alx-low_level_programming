#include "main.h"
/**
 * flip_bits - a fun.. returns the number of bits would need to
 * get from one number to another
 * @n: a given number
 * @m: another given number
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z = n ^ m;
	unsigned int i = 0;

	while (z)
	{
		i += (z & 1);
		z >>= 1;
	}
	return (i);
}
