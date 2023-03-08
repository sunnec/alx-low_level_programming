#include "main.h"
/**
 * _pow_recursion - function that returns power
 *
 * @x: int
 *
 * @y: int
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
		/*Any number raised to power 0 gives 1*/
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
		return (i);
	}
}
