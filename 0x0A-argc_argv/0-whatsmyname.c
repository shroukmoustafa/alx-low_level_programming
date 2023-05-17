#include "stdio.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: arrgument counter
 * @argv: arrgument value pointer
 * Return: (0) on success.
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
