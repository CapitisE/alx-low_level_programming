#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function to return the sum of all its parameters
 * @...: Given number of parameters whose sum should be calculated
 * @n: Number of paramenters passed to the function
 *
 * Return: 0 for n == 0, sum otherwise
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum = 0;

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);
	va_end(vl);
	return (sum);
}
