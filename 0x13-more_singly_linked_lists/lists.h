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

/*** Task 0 print_listint*/
/*** Task 1 listint_len*/
/*** Task 2 add_nodeint*/
/*** Task 3 add_nodeint_end*/
/*** Task 4 free_listint*/
/*** Task 5 free_listint2*/
/*** Task 6 pop_listint*/
/*** Task 7 get_nodeint_at_index*/
/*** Task 8 sum_listint*/
/*** Task 9 insert_nodeint_at_index*/
/*** Task 10 delete_nodeint_at_index*/
typedef struct listint_s
{
 int n;
 struct listint_s *next;
} listint_t;

int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif

