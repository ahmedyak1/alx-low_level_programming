#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: 1 number
 * @m: 2nd number
 *
 * Return: cont of number bit change
 */
unsigned int
flip_bits (unsigned long int n, unsigned long int m)
{
  int k;
  int cmp = 0;
  unsigned long int cur;
  unsigned long int exclu = n ^ m;

  for (k = 63; k >= 0; k--)
    {

      cur = exclu >> k;
      if (cur & 1)

	cmp++;

    }

  return (cmp);
}
