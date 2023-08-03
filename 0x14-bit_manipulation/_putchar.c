#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes putchar
 * @c: The character to print
 *
 * 
 * 
 * Return: true retunr 1 else  retunr -1 
 */
int
_putchar (char c)
{
  return (write (1, &c, 1));
}

