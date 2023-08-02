#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - a dog info struct
  * @name: Name-dog 
  * @age: Age-dog
  * @owner: Owner-dog  
  * description : 
  */
struct dog
{
  char *name;
  float age;
  char *owner;
};


typedef struct dog dog_t;

dog_t *new_dog (char *name, float age, char *owner);
void free_dog (dog_t * d);
char *_strcpy (char *dest, char *src);
int _strlen (char *s);
void init_dog (struct dog *d, char *name, float age, char *owner);
void print_dog (struct dog *d);
int _putchar(char c);

#endif
