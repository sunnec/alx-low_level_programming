#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int m, n;
	int len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		m = 0;
		while (s1[m++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		m = 0;
		while (s2[m++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (m = 0; m < len1; m++)
		result[m] = s1[m];
	for (n = 0; n < len2; n++, m++)
		result[m] = s2[n];
	result[len] = '\0';

	return (result);
}
