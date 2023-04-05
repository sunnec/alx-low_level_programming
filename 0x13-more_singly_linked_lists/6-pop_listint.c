#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function deletes the head node of listint_t list and
 * returns head node's data
 *
 * @head: pointer to pointer to the head node
 *
 * Return: head node's data (data) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}

	node = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(node);

	return (n);
}
