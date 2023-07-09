#include "stdio.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc:arguments count
 * @argv: arguments value
 * Return: (0) on success
*/

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
