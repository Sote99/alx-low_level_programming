#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its paramters.
 * @n: num of paramters passed to the function.
 * @...: variable number of paramters to calculate its sum
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

