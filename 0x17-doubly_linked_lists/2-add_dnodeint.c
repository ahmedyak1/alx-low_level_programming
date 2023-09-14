#include "lists.h"
/**
 * add_dnodeint- add new item at the firsr 
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new item
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newmim;

	newmim = malloc(sizeof(dlistint_t));

	if (!newmim)
		return (NULL);

    newmim->next = *head;
	newmim->n = n;
	newmim->prev = NULL;
	

	if (*head)
		(*head)->prev = newmim;
	*head = newmim;

	return newmim;
}
