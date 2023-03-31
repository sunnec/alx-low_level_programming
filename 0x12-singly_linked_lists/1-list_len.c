#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t list_len(const list_t *h);

/**
 * list_len - returns number of element in a linked list
 *
 * @h: name of the list
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
