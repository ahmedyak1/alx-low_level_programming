#ifndef LISTS_H
#define LISTS_H


/**
 * Struct list_s - Singly linked list
 * @str: string - (malloc'ed string)
 * @len: Length of the string
 * @next: Points to next node
 *
 * Singly linked list node structure
 * For Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
