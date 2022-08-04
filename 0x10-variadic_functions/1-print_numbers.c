#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (separator != NULL)
		{
			if ((i + 1) != n)
				printf("%d%s", x, separator);
			else
				printf("%d", x);
		}
		else
			printf("%d", x);
	}
	va_end(args);
	printf("\n");
}
