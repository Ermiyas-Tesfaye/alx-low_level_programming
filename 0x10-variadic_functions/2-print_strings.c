#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * void str_pr - print value
 * @s: string
 */
void str_pr(char *s)
{
	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
}
/**
 * print_strings - function prints strings
 * @separator: printed b/n the strings
 * @n: number of parameters
 * Author: Ermiyas
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (separator != NULL)
		{
			str_pr(s);
			if ((i + 1) != n)
				printf("%s", separator);
		}
		else
			str_pr(s);
	}
	va_end(args);
	printf("\n");
}
