#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
    * print_strings - Prints strings, followed by a new line.
    * @separator: The string to be print entre strings
    * @n: count of strings pass to function.
    * @...: A variable number of strings print
    *
    * 
    * Description: retunr separator is null, not printed
    *              else if one of the strings is null, print nil
*/
void
print_strings (const char *separator, const unsigned int n, ...)
{
  va_list mots;
  char *mot;
  unsigned int j;
  va_start (mots, n);
  for (j = 0; j < n; j++)
    {
      mot = va_arg (mots, char *);
      if (mot == NULL)
	printf ("(nil)");
      else
	printf ("%s", mot);
      if (j != (n - 1) && separator != NULL)
	printf ("%s", separator);
    }
  printf ("\n");
  va_end (mots);
}

