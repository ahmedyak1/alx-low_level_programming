#include "lists.h"

/**
 * free_dlistint - 
 * @head: point to the start of the  list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempooo;
	while (head)
	{
		tempooo = head->next;
		free(head);
		head = tempooo;
	}
}

