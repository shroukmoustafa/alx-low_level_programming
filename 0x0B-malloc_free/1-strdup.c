#include "main.h"
#include "stdlib.h"

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 *
 *  @str: the string given as a parameter to be copied
 *
 *  Return: (*str) case success, (NULL) case failed to allocate
*/

char *_strdup(char *str)
{
	int i;
	char *a;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(i + 1);
	if (a == NULL)
		return (NULL);
	for (j = 0; i >= 0; j++)
	{
		a[j] = str[j];
		i--;
	}
	a[j] = '\0';
	return (a);

}
