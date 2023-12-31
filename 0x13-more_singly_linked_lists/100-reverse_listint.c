#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse a list.
 * @head: pointer of a pointer to a list.
 *
 * Return: pointer to list.
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;
	return (*head);
}
