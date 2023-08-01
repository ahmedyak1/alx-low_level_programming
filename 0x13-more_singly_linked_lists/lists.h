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
{int nbr;struct listint_s *next;}
  listint_t;
