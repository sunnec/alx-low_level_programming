#include "main.h"
/**
 * _sqrt_recursion - function returns the natural square root of a number
 *
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (root(1, n));
}

/**
 * root - function that checks for square root
 *
 * @d: int
 *
 * @b: int
 *
 * Return: int
 */
int root(int d, int b)
{
	if (d * d == b)
		return (d);
	if (d * d > b)
		return (-1);
	return (root(d + 1, b));
}
