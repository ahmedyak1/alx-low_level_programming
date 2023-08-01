#include <stdio.h>
#include "lists.h"

/** Task 2 Add node
  * add_nodeint - add new nodes
  * @head: current position
  * @n: int to add
  * Return: pointer to current location
  */
listint_t *add_nodeint (listint_t **head, const int n)
{

  listint_t *newList;
  newList = *head;
  newList = malloc (sizeof (listint_t));

  if (newList == NULL)
    {
      return (NULL);
    }
  newList->next = *head;
  newList->n = n;
  *head = newList;
  return (*head);
}
