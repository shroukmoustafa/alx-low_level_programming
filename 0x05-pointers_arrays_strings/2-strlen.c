#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a string that is measuring its length
*/

int _strlen(char *s)
{
	int counter;
	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
