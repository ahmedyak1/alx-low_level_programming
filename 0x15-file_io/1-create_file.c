#include "main.h"

/**
 * task 1 
 * create_file - Make a file.
 * 
 * 
 * @filename: To point the name of file to make.
 * @text_content: To point a string the out of the file.
 *
 * Return: Return -1 fail else return 1
 *         
 */
int
create_file (const char *filename, char *text_content)
{
  int filed;
  int m;
  int k = 0;

  if (filename == NULL)
    return (-1);

  if (text_content != NULL)
    {
      for (k = 0; text_content[k];)
	k++;
    }

  filed = open (filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

  m = write (filed, text_content, k);

  if (filed == -1 || m == -1)
    {
      return (-1);
    }

  close (filed);

  return (1);
}

