#include "lists.h"

/**
 * print_dlistint- Prints all the itmes list
 * @h: Pointer to the h node
 * Return: the count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t lolo = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		lolo++;
	}
	return lolo;
}

