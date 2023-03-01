#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: string to be printed
 *
 * Return: length of string
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
