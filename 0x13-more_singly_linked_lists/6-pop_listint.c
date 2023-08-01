#include "lists.h"

/**
 * task 6 Pop
 * pop_listint - deletes the first node of a linked list
 * @head: point to the first element in the linked list
 *
 * Return: the data in the units that was removed,
 * or 0 if the list is empty
 */
int
pop_listint (listint_t ** head)
{
  listint_t *temporary;
  int j;

  if (!head || !*head)
    return (0);

  j = (*head)->n;
  temporary = (*head)->next;
  free (*head);
  *head = temporary;

  return (j);
}
