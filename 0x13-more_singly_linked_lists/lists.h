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
/*** Task 0 print_listint*/
size_t print_listint(const listint_t *h);
/*** Task 1 listint_len*/
size_t listint_len(const listint_t *h);
/*** Task 2 add_nodeint*/
listint_t *add_nodeint(listint_t **head, const int n);
/*** Task 3 add_nodeint_end*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*** Task 4 free_listint*/
void free_listint(listint_t *head);
/*** Task 5 free_listint2*/
void free_listint2(listint_t **head);
/*** Task 6 pop_listint*/
int pop_listint(listint_t **head);
/*** Task 7 get_nodeint_at_index*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*** Task 8 sum_listint*/
int sum_listint(listint_t *head);
/*** Task 9 insert_nodeint_at_index*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n);
/*** Task 10 delete_nodeint_at_index*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
