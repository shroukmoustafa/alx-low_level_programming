#include <unistd.h>

/**
 *_putchar - writes the character ch to stdout
 *
 *@ch: the character to print
 *
 *Return: 1 (success) , -1 (fail)
*/

int _putchar(char ch)
	{
	return (write(1, &ch, 1));
	}
