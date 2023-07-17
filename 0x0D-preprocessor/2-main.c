#include <stdio.h>
#define PRINT_FILENAME printf("%s\n", __FILE__)

/**
 *main - a program that prints the name of the file it was compiled from,
 followed by a new line
 *Return: (0) on success
*/
int main(void)
{
	PRINT_FILENAME;
	return (0);
}
