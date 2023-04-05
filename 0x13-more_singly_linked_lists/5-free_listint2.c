#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function frees listint_t list and sets the head to NULL
 *
 * @head: pointer to pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		node = *head;
	*head = (*head)->next;
		free(node);
	}

	*head = NULL;
}
