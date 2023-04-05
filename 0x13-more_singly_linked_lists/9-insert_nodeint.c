#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function inserts new node at idx
 *
 * @head: double pointer
 *
 * @idx: index of the node
 *
 * @n: new node value
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newnode;
	listint_t *tempnode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tempnode = *head;
		for (count = 0; count < idx - 1 && tempnode != NULL; count++)
		{
			tempnode = tempnode->next;
		}
		if (tempnode == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = tempnode->next;
	tempnode->next = newnode;
	return (newnode);
}
