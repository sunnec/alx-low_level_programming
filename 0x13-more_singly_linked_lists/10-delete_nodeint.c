#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function deletes node at index index of listint_t
 *
 * @head: pointer to pointer to head of list
 *
 * @index: index of the node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *nodec, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nodec = *head;
		*head = (*head)->next;
		free(nodec);
		return (1);
	}

	prev = *head;
	for (m = 0; m < index - 1 && prev->next != NULL; m++)
	{
		prev = prev->next;
	}
	if (prev->next == NULL)
		return (-1);

	nodec = prev->next;
	prev->next = nodec->next;
	free(nodec);

	return (1);
}
