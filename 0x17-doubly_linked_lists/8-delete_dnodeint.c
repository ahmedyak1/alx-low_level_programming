#include "lists.h"

/**
 * delete_dnodeint_at_index  delete in list
 * @head: pointer to the linked list
 * @index: indddex  delete item
 * Return: retunr 1 succes else failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cuurr;
	unsigned int k;

	if (!head || !*head)
		return -1;
	cuurr = *head;
	if (index == 0)
	{
		*head = cuurr->next;
		
		if (cuurr->next)
		{
			cuurr->next->prev = NULL;
		}
		free(cuurr);
		return 1;
	}
	for (k = 0; k < index; k++)
	{
		if (!cuurr->next)
			return -1;
		cuurr = cuurr->next;
	}
	cuurr->prev->next = cuurr->next;
	if (cuurr->next)
		cuurr->next->prev = cuurr->prev;
	
	free(cuurr);
	return 1;
	
}

