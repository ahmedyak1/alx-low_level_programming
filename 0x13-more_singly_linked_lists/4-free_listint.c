#include "lists.h"

/**
  * Task 4 Free list
  * free_listint - define function
  * @head: current postion
  */
void
free_listint (listint_t * head)
{
  if (head == NULL)
    {
      return;
    }

  free_listint (head->next);
  free (head);
}

