#include "variadic_functions.h"
#include <stdarg.h>
/**
    * sum_them_all - Returns the sum of all  arguments.
    * @n: The count of paramters pass to function.
    * @...: A variable number of paramters to calculate the sum of.
    *
    * 
    * 
    * Return: if number of paramenter nulll return 0.
    *         else - the sum of all parameters.
*/
int
sum_them_all (const unsigned int n, ...)
{
  va_list tim;
  unsigned int j;
  unsigned int somme = 0;
  va_start (tim, n);
  for (j = 0; j < n; j++)
    somme += va_arg (tim, int);
  va_end (tim);
  return (somme);
}
