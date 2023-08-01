#include "lists.h"

/**
 * Task 7 Get node at index
 * get_nodeint_at_index - returns the node at a certain index in a pointer list
 * @head: head node in the linked list
 * @index: index of the node to return
 *
 * Return: point to the node we are search for else return NULL
 */
listint_t *
get_nodeint_at_index (listint_t * head, unsigned int index)
{
  unsigned int j = 0;
  listint_t *temporary = head;

  while (temporary && j < index)
    {
      temporary = temporary->next;
      j++;
    }
  if (temporary)
    return temporary;
  else
    return NULL;
}
