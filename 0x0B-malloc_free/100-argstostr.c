#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int m, n, x, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		s = av[m];
		n = 0;

		while (s[n++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (m = 0, n = 0; m < ac && n < len; m++)
	{
		s = av[m];
		x = 0;

		while (s[x])
		{
			str[n] = s[x];
			x++;
			n++;
		}
		str[n++] = '\n';
	}
	str[n] = '\0';

	return (str);
}
