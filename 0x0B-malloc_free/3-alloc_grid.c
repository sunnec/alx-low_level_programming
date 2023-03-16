 #include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, m, n;
	int lent = width * height;

	if (lent <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		array[m] = (int *)malloc(sizeof(int) * width);
		if (array[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(array[m]);
			free(array);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			array[m][n] = 0;

	return (array);
}
