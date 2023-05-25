#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_list p;

	va_start(p, n);
	for (i = 0; i < (n - 1); i++)
	{
		sum += va_arg(p, unsigned int);
	}
	va_end(p);
	return (sum);

}
