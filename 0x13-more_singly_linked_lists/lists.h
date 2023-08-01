#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/**
 * struct listint_s - More singly linked lists
 * @nbr: integer
 * @next: pointer of the next node
 *
 */
typedef struct listint_s
{int n;struct listint_s *next;}
  listint_t;
/**
 * Task 0 print_listint
 */
size_t print_listint(const listint_t *h);
#endif
