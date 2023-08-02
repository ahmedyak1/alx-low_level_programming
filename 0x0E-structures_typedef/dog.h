#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a dog info struct
  * @name: Name-dog 
  * @age: Age-dog
  * @owner: Owner-dog  
  * 
  **/
struct dog
{
  char *name;
  float age;
  char *owner;
};
typedef struct dog;
/* Task 0 define struct dog*/
/* Task 3 dog_t */

/* Task 1 init_dog*/
void init_dog (struct dog *d, char *name, float age, char *owner);
/* Task 2 print_dog*/
void print_dog (struct dog *d);
/* Task 4 dog_t new_dog*/
dog_t *new_dog (char *name, float age, char *owner);
int _strlen (char *s);
char *_strcpy (char *dest, char *src);
/* Task 5 free_dog*/
void free_dog (dog_t * d);


#endif
