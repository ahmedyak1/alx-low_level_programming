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
  size_t lengnt = 0;
  int j;
  listint_t *temporary;

  if (h == NULL || !*h)
    return (0);

  while (*h)
    {
      j = *h - (*h)->next;
      if (j > 0)
	{
	  temporary = (*h)->next;
	  free (*h);
	  *h = temporary;
	  lengnt++;
	}
      else
	{
	  free (*h);
	  *h = NULL;
	  lengnt++;
	  break;
	}
    }

  *h = NULL;

  return (lengnt);
}
