#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
     * print_numbers - Prints numbers, with new line .
     * @separator: The string to be print entre numbers.
     * @n: The count of int passe to  function.
     * @...: A variable number of numbers to be print.
     * 
     * 
    
*/
void
print_numbers (const char *separator, const unsigned int n, ...)
{
  va_list chiff;
  unsigned int j;

  va_start (chiff, n);

  for (j = 0; j < n; j++)
    {
      printf ("%d", va_arg (chiff, int));
      if (j != (n - 1) && separator != NULL)
	printf ("%s", separator);
    }
  printf ("\n");
  va_end (chiff);
}

