#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 *
 * @old_size: size, in bytes, of the allocated space for ptr
 *
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block
 *         NULL if the function fails or new_size is equal to zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr2[i] = *((char *)ptr + i);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			ptr2[i] = *((char *)ptr + i);
	}
	free(ptr);
	return (ptr2);
}
