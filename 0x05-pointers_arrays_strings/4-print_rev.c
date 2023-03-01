#include "main.h"

/**
* print_rev -> function that prints a string in reverse
*
* @s: string to be printed in rev
*/

void print_rev(char *s)
{
	int a;
	int b;

	b = 0;
	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
