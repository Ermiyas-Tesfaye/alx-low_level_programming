#include "function_pointers.h"
/**
 * print_name - a function prints a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
