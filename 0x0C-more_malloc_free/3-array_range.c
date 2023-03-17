#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 *
 * @min: The minimum value of the range
 *
 * @max: The maximum value of the range
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr, n, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ptr[n] = min++;

	return (ptr);
}
