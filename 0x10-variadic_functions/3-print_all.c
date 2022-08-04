#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - print anything
 * @format: list of argument
 */
void print_all(const char * const format, ...)
{
	int length = strlen(format);
	int i = 0;
	char *s;
	va_list args;

	va_start(args, format);
	while (i < length)
	{
		if ((i + 1) != length)
		{
			if (format[i] == 'c')
				printf("%c, ", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%d, ", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f, ", va_arg(args, double));
			else if (format[i] == 's')
			{
				s = va_arg(args, char*);
				if (s != NULL)
					printf("%s, ", s);
				else
					printf("(nil), ");
			}
		}
		else
		{
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (format[i] == 's')
			{
				s = va_arg(args, char*);
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
