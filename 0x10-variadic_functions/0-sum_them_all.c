#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 * (Muhammad = sum, Ibrahim = i)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int Victor = 0;
	int David = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; Victor < n; Victor++)
		David += va_arg(ap, int);

	va_end(ap);
	return (Victor);
}
