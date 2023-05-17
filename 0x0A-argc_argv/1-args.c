#include "stdio.h"

/**
 * main - a program that prints the number of arguments passed into it.
 *@argc: arrgument count
 *@argv: arrgument value
 * Return: (0) on success
*/

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
