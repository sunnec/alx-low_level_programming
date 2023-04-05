#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function returns number of elements in listint_t list
 *
 * @h:
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);
}
