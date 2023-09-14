#include "lists.h"

/**
 * dlistint_len 
 * @h: pointer  the heaadd node
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t lolo = 0;

	while (h)
	{
		h = h->next;
		lolo++;
	}
	return lolo;
}

