#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: seperator sign
 * @n: number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if(!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (i != (n - 1))
		{
		printf("%s", (*separator ? *separator : ""));
		}
	}
	va_end(ptr);
	printf("\n");
}
