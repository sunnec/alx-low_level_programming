#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *
 * @str: string being tested
 *
 * Return: void
 */
void puts2(char *str)
{
	int l = 0, d = 0;

	while (str[l] != '\0')
		l++;

	l -= 1;

	for (; d <= l; d += 2)
		_putchar(str[d]);

	_putchar('\n');
}
