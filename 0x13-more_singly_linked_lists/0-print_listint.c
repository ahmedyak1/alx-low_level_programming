#include "lists.h"
#include <stdio.h>


/** task 0 print list 
  * print_listint - Prints out the elements present in a listint_t list
  * @h: single list to print
  * Return: Return: Count of nodes
  */
size_t print_listint (const listint_t *h)
{
  size_t j;

  for (j = 0; h ; j++)
    {
      printf ("%d \n", h -> n);
      h = h -> next;
    }

  return (j);
}
