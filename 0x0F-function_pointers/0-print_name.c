#include "function_pointers.h"
/**
 * print_name - a function prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: on error
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
