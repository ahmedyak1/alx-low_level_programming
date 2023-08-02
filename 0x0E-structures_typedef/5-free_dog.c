#include <stdlib.h>
#include "dog.h"

/**
	 * 
	 * free_dog - freee memory allocated for a dog
	 * @d: struct doggy to freee
*/
void
free_dog (dog_t * d)
{
  if (d != NULL)
    {
      free (d->name);
      free (d->owner);
      free (d);
    }
}
