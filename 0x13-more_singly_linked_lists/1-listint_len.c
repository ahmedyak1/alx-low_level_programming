#include <stdio.h>
#include "lists.h"

/** task 1 length list
  * listint_len - obtains the number of nodes in a listint_t list
  * @h: single list to print
  *
  * Return: Count of nodes
  */
size_t listint_len(const listint_t *h)
{
  size_t j;

    for (j = 0; h; j++)
     h = h->next;
 
  return (j);
}
