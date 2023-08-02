#include "lists.h"

/**
 * task 13 free list safe
 * free_listint_safe - frees a  list
 * @h: point to the head node in the  list
 *
 * Return: number of nodes 
 */
size_t
free_listint_safe (listint_t ** h)
{
  size_t length = 0;
  int i;
  listint_t *temporary;

  if (!h || !*h)
    return (0);

  while (*h)
    {
      i = *h - (*h)->next;
      if (i > 0)
	{
	  temporary = (*h)->next;
	  free (*h);
	  *h = temporary;
	  length++;
	}
      else
	{
	  free (*h);
	  *h = NULL;
	  length++;
	  break;
	}
    }

  *h = NULL;

  return (length);
}
