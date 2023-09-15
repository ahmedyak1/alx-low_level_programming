#include "lists.h"
/**
 * insert_dnodeint_at_index 
 * @h: Pointer to direction of the head
 * @n: data integer
 * @idx: indexxx at the insert  new item
 * 
 * Return: The dir of the new item
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nm;  
	dlistint_t *rm;
	*rm = *h;

	if (idx == 0)
		return add_dnodeint(h, n);

	for (; idx != 1; idx--)
	{
		if (!rm)
			return NULL;
		rm = rm->next;
	}

	if (!rm->next)
		return (add_dnodeint_end(h, n));

	nm = malloc(sizeof(dlistint_t));

	if (!nm)
		return NULL;

	nm->n = n;
	nm->next = rm->next;
	nm->prev = rm;
	nm->next->prev = nm;
	nm->next = nm;

	return nm;
}

