#include "lists.h"

/**
 * print_dlistint - out all the items of list
 *
 * @h: first of the list
 * Return: count of nodes
 * 
 * 
 */
size_t
print_dlistint (const dlistint_t * h)
{
  int m;

  m = 0;

  if (!h)
    return (m);

  while (h->prev)
  
    h = h->prev;

  while (h)
    {
      printf ("%d\n", h->n);
      m++;
      h = h->next;
    }
  return m;
}

