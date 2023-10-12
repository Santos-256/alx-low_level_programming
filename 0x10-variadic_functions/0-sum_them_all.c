#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of
 * Return: 0 if n == 0 else the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);
	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);
	va_end(ap);
		return (sum);
}
