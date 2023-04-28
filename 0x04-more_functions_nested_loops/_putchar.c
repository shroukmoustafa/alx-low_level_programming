#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes the character ch to stdout
 *
 *@ch: the character to print
 *
 *Return: 1 (success) , -1 (fail)
*/

int _putchar(char c)
	{
	return (write(1, &c, 1));
	}
