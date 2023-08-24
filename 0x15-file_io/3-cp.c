#include "main.h"
#include <stdio.h>

/**
 * error_f - checks if files can be opened
 * @file_from: file out of
 * @file_to: file into
 * @argv: arguments
 * 
 * 
 * Return: void.
 */
void
error_f (int file_from, int file_to, char *argv[])
{
  if (file_to == -1)
    {
      dprintf (STDERR_FILENO, "Error: Unable to perform writing to %s\n",
	       argv[2]);

      exit (99);
    }
  if (file_from == -1)
    {
      dprintf (STDERR_FILENO,
	       "Error: Reading from the file is not possible %s\n", argv[1]);

      exit (98);
    }

}

/**
 * main - check the code.
 * @argc: count of arguments.
 * @argv: arguments .
 * 
 * Return: retunr 0.
 */
int
main (int argc, char *argv[])
{
  int file_from;
  int file_to;
  int errorc;
  ssize_t n;
  ssize_t nov;
  char buf[1024];

  if (argc != 3)
    {
      dprintf (STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
      exit (97);
    }

  file_from = open (argv[1], O_RDONLY);
  file_to = open (argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
  error_f (file_from, file_to, argv);

  n = 1024;
  while (n == 1024)
    {
      n = read (file_from, buf, 1024);
      if (n == -1)
	error_f (-1, 0, argv);
      nov = write (file_to, buf, n);
      if (nov == -1)
	error_f (0, -1, argv);
    }

  errorc = close (file_from);

  if (errorc == -1)
    {
      dprintf (STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
      exit (100);
    }

  errorc = close (file_to);
  if (errorc == -1)
    {
      dprintf (STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
      exit (100);
    }
  return (0);
}

