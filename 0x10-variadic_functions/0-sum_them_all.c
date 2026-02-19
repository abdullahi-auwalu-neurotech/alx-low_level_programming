#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: the number of paramenters
 *
 * Return: the sum or 0 if n is 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	int total = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		total = va_arg(ap, int);
		sum += total;
	}
	va_end(ap);
	return (sum);
}
