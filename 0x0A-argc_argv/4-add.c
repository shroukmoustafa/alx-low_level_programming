#include "stdio.h"
#include "stdlib.h"

/**
 * main - a program that adds positive numbers.
 * @argc: arrgument counter
 * @argv: arrgument value
 * Return: (0) on success ,else oherwise
*/

int main(int argc, char **argv)
{
	int i = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
			i += atoi(argv[argc]);
	}
	printf("%d\n", i);
	return (0);
}
