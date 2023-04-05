#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function calculates sum of all the data of listint_t
 *
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = (head->n) + sum;
		head = head->next;
	}

	return (sum);
}
