#include "main.h"

/**
 * *string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 *
 * @str: string to be worked on
 * Return: (str)
*/

char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0', i++)
	{
		if (str[i] >= 97 && str <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
