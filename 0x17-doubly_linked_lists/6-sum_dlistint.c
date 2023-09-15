#include "lists.h"

/**
 * sum_dlistint -
 * @head: pointer  to the start of the linked list
 * Return: return somme of the ist 
 */
int sum_dlistint(dlistint_t *head)
{
	int somme = 0;

	while (head)
	{
		somme += head->n;
		head = head->next;
	}
	return somme;
}

