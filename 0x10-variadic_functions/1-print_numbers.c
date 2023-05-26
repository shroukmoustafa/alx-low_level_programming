#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	i = n;
	va_start(ptr, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	while (i--)
	{
		printf("%d", va_arg(ptr, int));
		if ((*separator != '\0' && (i != 0)) || separator)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
