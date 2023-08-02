#ifndef DOG_H
#define DOG_H


/**
  * struct dog - a dog info struct
  * @name: Name-dog 
  * @age: Age-dog
  * @owner: Owner-dog  
  * 
  */

typedef struct dog
{
  char *name;
  float age;
  char *owner;
};
/**
 * Task 0 define struct dog
 * Task 3 dog_t
 * Task 1 init_dog
 * Task 2 print_dog
 * Task 4 dog_t new_dog
 * Task 5 free_dog
 */
typedef dog dog_t;


dog_t *new_dog (char *name, float age, char *owner);
void free_dog (dog_t * d);
char *_strcpy (char *dest, char *src);
int _strlen (char *s);
void init_dog (struct dog *d, char *name, float age, char *owner);
void print_dog (struct dog *d);

#endif
