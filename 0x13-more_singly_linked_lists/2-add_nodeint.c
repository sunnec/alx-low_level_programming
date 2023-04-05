#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function adds node at the beginning of listint_t list
 *
 * @head: pointer to a pointer to head of listint_t
 *
 * @n: int value
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *entry;

	if (head == NULL)
	{
		return (NULL);
	}

	entry = malloc(sizeof(listint_t));
	if (entry == NULL)
	{
		return (NULL);
	}

	entry->n = n;
	entry->next = *head;
	*head = entry;

	return (entry);
}
