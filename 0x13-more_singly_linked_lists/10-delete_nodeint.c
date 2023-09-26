#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 if (head == NULL || *head == NULL)
	 {
	   return  (-1);
   }

	 if (index == 0)
	 {
	   listint_t *data = *head;
	   *head = (*head)->next;
	   free(data);
	   return (1);
   }
	 else
	 {
	   listint_t *current = *head;
	   listint_t *previous = NULL;
	   unsigned int current_index = 0;

	   while (current != NULL && current_index < index)
	   {
	     previous = current;
	     current = current->next;
	     current_index++;
     }

	   if (current != NULL)
	   {
	     previous->next = current->next;
	     free(current);
	     return (1);
     }
	   else
	   {
	     return (-1);
     }
   }
}

