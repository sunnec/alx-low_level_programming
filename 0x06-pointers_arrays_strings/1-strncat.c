#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @src: The source of strings
 *
 * @dest: The destination of the string
 *
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (d = 0; src[d] != '\0' && d < n; i++, d++)
	{
		dest[i] = src[d];
	}
	dest[i] = '\0';
	return (dest);
}
