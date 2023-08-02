#include "lists.h"

/**
 * task 12 looped listint
 * looped_listint_len - numbers the number of unique nodes
 * @head: point to the begin of the listint_t 
 *
 * Return: list not loop return 0 else return Number of unique elements.
 */
size_t
looped_listint_len (const listint_t * head)
{
  const listint_t *a;
  const listint_t *b;
  size_t nodesNumber = 1;

  if (head == NULL || head->next == NULL)
    return (0);

  a = head->next;
  b = (head->next)->next;

  while (b != 0)
    {
      if (b == a)
	{
	  a = head;
	  while (b != a)
	    {
	      nodesNumber++;
	      a = a->next;
	      b = b->next;
	    }

	  a = a->next;
	  while (b != a)
	    {
	      nodesNumber++;
	      a = a->next;
	    }

	  return (nodesNumber);
	}

      a = a->next;
      b = (b->next)->next;
    }

  return (0);
}
