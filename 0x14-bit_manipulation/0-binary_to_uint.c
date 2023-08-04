#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string with binary number
 *
 * 
 * 
 * Return: number converter
 */
unsigned int binary_to_uint (const char *b)
{
  unsigned int a;
  int j; 
  int base;

  if (b==NULL)
    return (0);

  a = 0;

  for (j = 0; b[j] != '\0'; j++)
    ;

  for (j--, base = 1; j >= 0; j--, base *= 2)
    {
      if (b[j] != '0' && b[j] != '1')
	  return (0);
	
      if (b[j] & 1)
	{
	        a += base;
	}
    }

  return (a);
}

