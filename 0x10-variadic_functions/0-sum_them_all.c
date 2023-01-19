#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
