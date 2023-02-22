#include "main.h"

/**
 * print_alphabet_x10-function that prints 10 times the alphabet
 *
 * Return 0 upon success
 */

void print_alphabet_x10(void)
{
	int d = 0;
	int j;

	while (d < 10)
	{
	d++;
		j = 'a';

		while (j <= 'z')
		{
		_putchar(j);
		j++;
		}
	_putchar('\n');
	}
}
