#include "lists.h"
/**
 * printnum - prints number
 */
void printnum(unsigned int num)
{
	if (num > 9)
		printnum(num / 10);
	_putchar(num % 10);
}
