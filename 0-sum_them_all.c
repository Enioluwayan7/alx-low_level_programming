#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameter passed to the function
 * @...: A variable number of parameter to calculate the sum
 *
 * Return: if n == 0, Return 0
 * otherwise teh sum of all parameters
 */

 int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i, sum = 0;

	va_start (ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

