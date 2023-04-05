#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function adds new node at the end of listint_t
 *
 * @head: pointer to head of listint_t
 *
 * @n: new integer data
 *
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_at_end, *current_node;

	if (head == NULL)
	{
		return (NULL);
	}

	node_at_end = malloc(sizeof(listint_t));
	if (node_at_end == NULL)
	{
		return (NULL);
	}

	node_at_end->n = n;
	node_at_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_at_end;
		return (node_at_end);
	}

	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = node_at_end;

	return (node_at_end);
}
