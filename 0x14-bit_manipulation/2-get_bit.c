#include <stdio.h>
#include "main.h"
/**
 * get_bit - the value of a bit at an position at decimal number
 * @n: number to find
 * @index: index the bit
 *
 * 
 * 
 * Return: value of the bit
 */
int
get_bit (unsigned long int n, unsigned int index)
{
  int valeur;

  if (index > 63)
    return (-1);

  valeur = (n >> index) & 1;

  return (valeur);
}

