#include "lists.h"

size_t looped_listint_len (const listint_t * head);
size_t print_listint_safe (const listint_t * head);

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
  size_t i = 1;

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
	      i++;
	      a = a->next;
	      b = b->next;
	    }

	  a = a->next;
	  while (b != a)
	    {
	      i++;
	      a = a->next;
	    }

	  return (i);
	}

      a = a->next;
      b = (b->next)->next;
    }

  return (0);
}

/**
 * task 12
 * print_listint_safe - Prints a list safe 
 * @head:  point to the begin of the list.
 *
 * Return: number of elements in the list.
 */
size_t
print_listint_safe (const listint_t * head)
{
  size_t elem = 0;
  size_t i = 0;

  elem = looped_listint_len (head);

  if (elem == 0)
    {
      for (; head != NULL; elem++)
	{
	  printf ("[%p] %d\n", (void *) head, head->n);
	  head = head->next;
	}
    }

  else
    {
      for (i = 0; i < elem; i++)
	{
	  printf ("[%p] %d\n", (void *) head, head->n);
	  head = head->next;
	}
      printf ("-> [%p] %d\n", (void *) head, head->n);
    }

  return (elem);
}
