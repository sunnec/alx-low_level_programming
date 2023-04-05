#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function frees memory from listint_t
 *
 * @head: pointer to head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
