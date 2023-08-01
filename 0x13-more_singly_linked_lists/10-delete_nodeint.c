#include "lists.h"
/**
 * task 10 Delete at index
 * delete_nodeint_at_index - removes a node at a certain position
 * @head: point to the head element in the list
 * @index: index of the node to delete
 *
 * Return: retunr 1 Successed else  return -1 Failed
 */
int
delete_nodeint_at_index (listint_t ** head, unsigned int index)
{
  unsigned int j = 0;
  listint_t *temporary = *head;
  listint_t *cur = NULL;

  if (index == 0)
    {
      *head = (*head)->next;
      free (temporary);
      return (1);
    }

  if (*head == NULL)
    {
      return (-1);
    }


  while (j < index - 1)
    {
      if (temporary == NULL || !(temporary->next))
	{
	  return (-1);
	}
      temporary = temporary->next;
      j++;
    }


  cur = temporary->next;
  temporary->next = cur->next;
  free (cur);

  return (1);
}
