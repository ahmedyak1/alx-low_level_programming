#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string with binary number
 *
 * 
 * 
 * Return: number converter
 */
  unsigned int
binary_to_uint (const char *b)
{
  unsigned int valeur = 0;
  int a;


  if (b == NULL)
    return (0);

  for (a = 0; b[a]; a++)
    {
      if (b[a] < '0' || b[a] > '1')
	return (0);

      valeur = 2 * valeur + (b[a] - '0');
    }


  return (valeur);
}

