#include "main.h"

/**
 * get_endianness - checks
 * Return: 0 for big, 1 for little
 */
int
get_endianness (void)
{
  unsigned int k = 1;
  char *ma = (char *) &k;

  return (*ma);
}

