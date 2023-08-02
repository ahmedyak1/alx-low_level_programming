#include <stdlib.h>
#include "dog.h"


/**
	 * _strlen - returns the length of a string
	 * @s: string to evaluate
	 *
	 * Return: the length of the string
**/
int
_strlen (char *s)
{
  int j;
  j = 0;
  while (s[j] != '\0')
    {
      j++;
    }
  return (j);
}

/**
	 * *_strcpy - copies the string point to src
	 *
	 * to the buffer pointed to by dest
	 * @dest: where we gonna copy
	 * @src: what we gonna copy
	 *
	 * Return: the point to destination
*/
char *
_strcpy (char *dest, char *src)
{
  int j, i;


  j = 0;


  while (src[j] != '\0')
    {
      j++;
    }
  for (i = 0; i < j; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';

  return (dest);
}

/**
	 * new_dog - creates a new doggy
	 * @name: name-dog
	 * @age: age-dog
	 * @owner: owner-dog
	 *
	 * Return: pointe to the new dog Succeced else return NULL 
*/
dog_t *
new_dog (char *name, float age, char *owner)
{
  dog_t *dog;
  int a, b;


  a = _strlen (name);
  b = _strlen (owner);


  dog = malloc (sizeof (dog_t));
  if (dog == NULL)
    return (NULL);


  dog->name = malloc (sizeof (char) * (a + 1));
  if (dog->name == NULL)
    {
      free (dog);
      return (NULL);
    }
  dog->owner = malloc (sizeof (char) * (b + 1));
  if (dog->owner == NULL)
    {
      free (dog);
      free (dog->name);
      return (NULL);
    }
  _strcpy (dog->name, name);
  _strcpy (dog->owner, owner);
  dog->age = age;


  return (dog);
}
