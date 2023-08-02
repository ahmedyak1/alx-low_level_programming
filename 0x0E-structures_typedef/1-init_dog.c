#include <stdlib.h>
#include "dog.h"


/**
  * Task 1 - Init dog 
  * init_dog - declare a variable of type struct dog
  * @d: point to struct dog to declare
  * @name: name to declare
  * @age: age to declare
  * @owner: owner to declare
  * 
  * 
  * Return : nothing
*/
void
init_dog (struct dog *d, char *name, float age, char *owner)
{
  if (doggy != NULL)
    {
      doggy = malloc (sizeof (struct dog));

      doggy->name = name;

      doggy->age = age;

      doggy->owner = owner;
    }
}
