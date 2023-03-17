#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_length = 0, s2_length = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length])
		s1_length++;

	while (s2[s2_length])
		s2_length++;

	if (n >= s2_length)
		n = s2_length;

	result = malloc((s1_length + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
