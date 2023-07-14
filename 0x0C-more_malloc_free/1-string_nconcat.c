#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer of first string
 * @s2: pointer of second string
 * @n: number of add bytes
 * Return: NULL on failuer, pointer on sucess
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i;
	char *con;

	s1len = 0;
	s2len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	if (n >= s2len)
		n = s2len;
	con = malloc(s1len + n + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		con[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		con[s1len + i] = s2[i];
	}
	con[s1len + n] = '\0';
	return (con);
}
