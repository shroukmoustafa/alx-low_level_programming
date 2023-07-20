#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum, (0)
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int sum, i;
	va_list p;

	sum = 0;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, unsigned int);
	}
	ve_end(p);
	return (sum);
}
