#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array and sets memory to zero
 *
 * @nmemb: The number of elements in the array
 *
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);

	if (alloc == NULL)
		return (NULL);

	for (n = 0; n < (nmemb * size); n++)
		alloc[n] = 0;

	return ((void *)alloc);
}
