#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the compared string
 * @accept: the substring to be compaired
 *
 * Return: (s)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == s[i])
			return (i + 1);
	}
	return (0);
}
