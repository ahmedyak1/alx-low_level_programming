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
  listint_t *temp;

  if (!h || !*h)
    return (0);

  while (*h)
    {
      j = *h - (*h)->next;
      if (j < 0)
	{
	  free (*h);
	  *h = NULL;
	  lengnt++;
	  break;

	}
      else
	{
	  temp = (*h)->next;
	  free (*h);
	  *h = temp;
	  lengnt++;
	}
    }

  *h = NULL;

  return (lengnt);
}
