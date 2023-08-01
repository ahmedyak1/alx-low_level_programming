#include "lists.h"

/**
 * task 8 Sum list
 * sum_listint - calculates the sum of all the data
 * @head: head node in linked list
 *
 * Return: sum of all data
 */
int
sum_listint (listint_t * head)
{
  int sum = 0;
  listint_t *temporary = head;

  while (temporary)
    {
      sum += temporary->n;
      temporary = temporary->next;
    }

  return (sum);
}
