#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum, (0)
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	va_list p;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, unsigned int);
	}
	va_end(p);
	return (sum);
}
