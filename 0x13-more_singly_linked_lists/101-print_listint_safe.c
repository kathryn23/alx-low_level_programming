#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of a list.
 *
 * Return: Length of list (INT)
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;
	int is_loop = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (!(fast->next->next))
			break;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = slow->next;
			is_loop = 1;
			break;
		}
	}

	if (!is_loop)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
		return (count);
	}
	while (head)
	{
		count++;
		if (head == slow)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
