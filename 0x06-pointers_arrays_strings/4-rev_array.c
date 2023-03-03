#include "main.h"
/**
 * reverse_array - reverse array
 *
 * @a:array
 *
 * @n:integer
 *
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int *i = a;
	int *j = a + n - 1;
	int d;

	while (i < j)
	{
		d = *i;
		*i = *j;
		*j = d;
		i++;
		j--;
	}
}
