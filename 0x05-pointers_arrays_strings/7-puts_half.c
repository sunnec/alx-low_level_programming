#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: input
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int l_Str = 0, n;

	while (str[l_Str] != '\0')
		l_Str++;
	if (l_Str + 1 % 2 != '0')
		n = (l_Str - 1) / 2;
	else
		n = (l_Str / 2);
	n++;

	for (l_Str = n; str[l_Str] != '\0'; l_Str++)
	_putchar(str[l_Str]);
	_putchar('\n');
}
