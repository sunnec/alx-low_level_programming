#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The source string
 *
 * Return: Returns a pointer to the duplicated string.
 *         It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *cpy;
	int n, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
		len++;

	cpy = (char *)malloc((sizeof(char) * len) + 1);
	if (cpy == NULL)
		return (NULL);

	for (n = 0; n < len; n++)
		cpy[n] = str[n];
	cpy[len] = '\0';


	return (cpy);
}
