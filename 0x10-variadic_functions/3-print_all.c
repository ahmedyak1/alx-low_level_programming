#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
         * print_all - print all the words
         * @format: list of types of arguments passe to function
         * 
         * 
         * 
         * 
         * return void
*/
void
print_all (const char *const format, ...)
{
  int j = 0;
  char *word, *sepa = "";
  va_list list;
  va_start (list, format);
  if (format)
    {
      while (format[j])
	{
	  switch (format[j])
	    {
	    case 'c':
	      printf ("%s%c", sepa, va_arg (list, int));
	      break;

	    case 'i':
	      printf ("%s%d", sepa, va_arg (list, int));
	      break;

	    case 'f':
	      printf ("%s%f", sepa, va_arg (list, double));
	      break;

	    case 's':
	      word = va_arg (list, char *);


	      if (word == NULL)
		word = "(nil)";
	      printf ("%s%s", sepa, word);
	      break;

	    default:
	      j++;
	      continue;
	    }
	  sepa = ", ";
	  j++;
	}
    }
  printf ("\n");
  va_end (list);
}

