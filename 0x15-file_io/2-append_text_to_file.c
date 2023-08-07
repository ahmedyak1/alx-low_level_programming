#include "main.h"

/**
 * task 2 append_text_to_file
 * 
 * append_text_to_file - paste text end of a file.
 * @filename: To point the name file.
 * @text_content: The teext  added at the end 
 *
 * Return: return -1 fail else 1
 *        
 */
int
append_text_to_file (const char *filename, char *text_content)
{
  int x;
  int m;
  int k = 0;

  if (filename == NULL)
    return (-1);

  if (text_content != NULL)
    {
      for (k = 0; text_content[k];)
	k++;
    }

  x = open (filename, O_WRONLY | O_APPEND);

  m = write (x, text_content, k);

  if (m == -1 || x == -1)
    {
      return (-1);
    }
    
    
  close (x);




  return (1);
}

