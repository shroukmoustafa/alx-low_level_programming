#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator:  is the string to be printed between the strings
 * @n: is the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i;
	char *str;

	i = n;
	va_start(ptr, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	while (i--)
	{
		str = va_arg(ptr, char *);
		if (*str != '\0' && *separator != '\0')
			printf("%s%s", str, (i != 0 ? separator : ""));
		if (*str == '\0' && *separator != '\0')
				printf("nil%s",(i != 0 ? separator : ""));
		if (*separator == '\0')
			printf("%s", (str ? str : "nil"));
	}
	va_end(ptr);
	printf("\n");
}
