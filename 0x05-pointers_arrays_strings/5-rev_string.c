#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * _putchar - printing function
 *
 * @s: char to be checked
 *
 * Return: 0 on success
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char c;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		c = s[i];
		s[i++] = s[l];
		s[l] = c;
	}
}
