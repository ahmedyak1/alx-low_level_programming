#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free the linked list
 * @head: list_t List to be Freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
