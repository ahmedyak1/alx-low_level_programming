#include "lists.h"

/**
 * get_dnodeint_at_index 
 * @head: pointer to  list
 * @index: item of node
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;
	k = 0;

	if (!head)
		return NULL;

	while (head && k < index)
	{
	    k++;
		head = head->next;
		
	}
	return head;
}

