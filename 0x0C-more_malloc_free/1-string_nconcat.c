#include "main.h"
#include "stdlib.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the required number of memory
 *
 * Return: (NULL) on fail , pointer on success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, j, f;
	char *ss;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	ss = malloc(i + n + 1);
	if (ss == NULL)
	{
		return (NULL);
	}
	f = 0;
	for (k = 0; k <= (i + n - 1); k++)
	{
		if (k < i)
		{
			ss[k] = s1[k];
		}
		if (k >= i)
		{
			ss[k] = s2[f];
			f++;
		}
	}
	ss[k] = '\0';
	return (ss);
}
