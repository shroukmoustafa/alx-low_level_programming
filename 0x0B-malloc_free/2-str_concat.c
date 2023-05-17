#include "main.h"
#include "stdlib.h"

/**
 *str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: (str) if success , (NULL) other wise
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, k, n;
	char *str;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc(i + j + 2);
	if (str == NULL)
		return (NULL);
	n = 0;
	for (k = 0; k <= (i + 1); k++)
	{
			if (k <= i)
			{
				str[k] = s1[k];
			}
			if (k == (i + 1))
				str[k] = '\0';
	}
	for (;k <= (i + j + 1); k++)
	{
			str[k] = s2[n];
			n++;
	}
	str[k] = '\0';
	return (str);

}
