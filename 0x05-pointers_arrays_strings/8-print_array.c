#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n element of an array of integers
 *
 * @a: integer to be tested
 *
 * @n: integer to be tested
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
	printf("%d", a[d]);

		if (d != n - 1)
		{
		printf(", ");
		}
	}

	printf("\n");
}
