#include "lists.h"
/**
 * task 9 Insert
 * insert_nodeint_at_index - inserts a new node
 * 
 * @head: point to the head node in the list
 * @idx: index the position of the new node
 * @n: data to inject in the new node
 *
 * Return: point to the new node else return NULL
 */
listint_t *
insert_nodeint_at_index (listint_t ** head, unsigned int idx, int n)
{
  unsigned int j;
  listint_t *new;
  listint_t *temporary = *head;

  new = malloc (sizeof (listint_t));
  if (new == NULL || head == NULL)
    return (NULL);

  new->n = n;
  new->next = NULL;

  if (idx == 0)
    {
      new->next = *head;
      *head = new;
      return (new);
    }

  for (j = 0; temporary && j < idx; j++)
    {
      if (j == idx - 1)
	{
	  new->next = temporary->next;
	  temporary->next = new;
	  return (new);
	}
      else
	temporary = temporary->next;
    }

  return (NULL);
}
