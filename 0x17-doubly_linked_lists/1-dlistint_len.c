#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a double linked list
 *
 * 
 * @h: first list
 * Return: count of nodes
 */ 
size_t dlistint_len (const dlistint_t * h) 
{
      
    int m;
    m = 0;
      
     
    if (!h)
        return (m);
      
     
    while (h->prev)
        h = h->prev;
    while (h != NULL)
        {
        h = h->next;  
        m++;
        
        }
    return (count);

}

