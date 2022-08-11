#include <unistd.h>
#include "lists.h"
/**
 * _putchar - print one character at a time
 * @c: the character to be print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
