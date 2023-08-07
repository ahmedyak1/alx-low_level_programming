#include "main.h"
#include <stdlib.h>

/**
 * Task 0
 * read_textfile- Read string file print to stdout.
 * 
 * 
 * @filename: text file to read
 * @letters: Count of letters to read
 * Return: Count of read and prtint return 0 failed
 *       
 */
ssize_t
read_textfile (const char *filename, size_t letters)
{
  char *bu;
  ssize_t filed;
  ssize_t x;
  ssize_t y;

  filed = open (filename, O_RDONLY);
  
  if (filed == -1)
    return (0);
    
  bu = malloc (sizeof (char) * letters);
  y = read (filed, bu, letters);
  x = write (STDOUT_FILENO, bu, y);

  free (bu);
  close (filed);
  return (x);
  
  
}

