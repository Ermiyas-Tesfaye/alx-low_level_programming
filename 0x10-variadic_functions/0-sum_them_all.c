#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: total value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += av_arg(args, int);
	va_end(args);
	return (sum);
}
