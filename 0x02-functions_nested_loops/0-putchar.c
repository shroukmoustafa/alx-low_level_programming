#include <unistd.h>

/**
 * _putchar - function prints character c to stdout
 * @c: the character to print
 *
 * Return: 1 (success) , -1 (fail)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
