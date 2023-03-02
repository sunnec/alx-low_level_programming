#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char to concatenated
 *
 * @src: char
 *
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
