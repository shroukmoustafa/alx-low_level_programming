#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_list p;

	va_start(p, n);
	for (i = 0; i < (n); i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);

}
