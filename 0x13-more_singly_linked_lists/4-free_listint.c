#include "lists.h"

/**
  * Task 4 Free list
  * free_listint - define function
  * @head: current postion
  */
void
free_listint (listint_t * head)
{
  listint_t *temp;

  while (head)
    {
      temp = head->next;
      free (head);
      head = temp;
    }
}
