#include "lists.h"

/** Task 3 Add node at the end
  * add_nodeint_end - adds a new node at the end of the list
  * @head: current position
  * @n: int to add 
  * Return: pointer to current location 
  */
listint_t *
add_nodeint_end (listint_t ** head, const int n)
{
  listint_t *new, *current;

  new = malloc (sizeof (listint_t));

  if (new == NULL)
    {
      return (NULL);
    }

  new->n = n;

  new->next = NULL;

  if (*head == NULL)
    {
      *head = new;
      return (*head);
    }

  current = *head;
  while (current->next != NULL)
    {
      current = current->next;
    }
  current->next = new;
  return (*head);
}
