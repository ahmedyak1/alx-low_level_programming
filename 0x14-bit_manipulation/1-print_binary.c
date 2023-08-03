#include "main.h"
/**
 * print_binary - prints the binary equal of a decimal number
 * @n: number to affiche in binary
 * 
 * 
 * 
 * Return : Void
 */
void
print_binary (unsigned long int n)
{

  unsigned long int curr;
  int a;
  int b = 0;


  for (a = 63; a >= 0; a--)
    {
      curr = n >> a;

      if (curr & 1)
	{
	  _putchar ('1');

	  b++;
	}
      else if (b)
	_putchar ('0');

    }
  if (b == NULL)
    _putchar ('0');
}
