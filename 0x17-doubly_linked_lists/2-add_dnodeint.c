#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: data to be added
 *
 * Return: he address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *my_node;

	my_node = malloc(sizeof(dlistint_t));
	if (my_node == NULL)
		return (NULL);

	my_node->n = n;
	my_node->next = *head;
	my_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = my_node;
	*head = my_node;
	return (my_node);
}
