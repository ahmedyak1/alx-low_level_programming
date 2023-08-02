#include <stdlib.h>
#include "dog.h"


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
  int length, i;


  length = 0;


  while (src[length] != '\0')
    {
      length++;
    }


  for (i = 0; i < length; i++)
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
	 * Return: pointe to the new dog Succeced else  return NULL 
*/
dog_t *
new_dog (char *name, float age, char *owner)
{
  dog_t *dog;
  int i, j;


  i = _strlen (name);
  j = _strlen (owner);


  dog = malloc (sizeof (dog_t));
  if (dog == NULL)
    return (NULL);


  dog->name = malloc (sizeof (char) * (i + 1));
  if (!dog->name)
    {
      free (dog);
      return (NULL);
    }
  dog->owner = malloc (sizeof (char) * (j + 1));
  if (!dog->owner)
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

free (d->owner);
free (d);
}
}
