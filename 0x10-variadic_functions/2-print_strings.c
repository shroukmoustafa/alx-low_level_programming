#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator
 * @n: number of arrguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	if (!n)
	{
		printf("\n");
			return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		printf("%s", (str ? str : "(nil)"));
		if(separator && (i < (n -1)))
			{
				printf("%s", separator);
			}
	}
	va_end(ptr);
	printf("\n");
}
