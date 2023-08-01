#include "lists.h"

/**
 * task 11 reverse list 
 * reverse_listint - reverses a linked list
 * @head: point to the head node in the list
 *
 * Return: point to the head node in the new list
 */
listint_t *
reverse_listint (listint_t ** head)
{
  listint_t *next = NULL;
  listint_t *previos = NULL;


  while (head != NULL)
    {
      next = (*head)->next;
      (*head)->next = previos;
      previos = *head;
      *head = next;
    }

  *head = previos;

  return (*head);
}
