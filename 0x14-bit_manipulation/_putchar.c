#include <unistd.h>
#include "main.h"
/**
 * _putchar - a fun.. to pu a character on the console
 * @c: char to be print
 * Return: always 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
