#include "lists.h"
/**
 * add_dnodeint- add new item at the firsr 
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new item
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nm;
	dlistint_t *ld;

	nm = malloc(sizeof(dlistint_t));

	if (nm == NULL)
		return (NULL);

	nm->n = n;
	nm->next = NULL;
	nm->prev = NULL;
	if (*head == NULL)
	{
		*head = nm;
		return (nm);
	}
	ld = *head;

	while (ld->next != NULL)
		ld = ld->next;
	ld->next = nm;
	nm->prev = ld;

	return (nm);
}

