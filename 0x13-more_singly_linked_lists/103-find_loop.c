#include "lists.h"

/**
 * task 14 find loop
 * find_listint_loop -  the loop in a linked list
 * @head: linked list to point for
 *
 * Return: point yo the node where the loop begins else return NULL
 */
listint_t *
find_listint_loop (listint_t * head)
{
  listint_t *a = head;
  listint_t *b = head;

  if (!head)
    return (NULL);

  while (b->next && a && b)
    {
      b = b->next->next;
      a = a->next;
      if (a == b)
	{
	  a = head;
	  while (a != b)
	    {
	      a = a->next;
	      b = b->next;
	    }
	  return (b);
	}
    }

  return (NULL);
}
