#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Entry Point
 * @n: The number of parameters passed to the function.
	@...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *	otherwise - the sum of all parameters.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
