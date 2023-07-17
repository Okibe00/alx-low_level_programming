#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * struct dog - dog information
  * @name: name of dog
  * @age: age of dog
  * @owner: dog owner
  * description: holds dog information
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_memcpy(char *dest, char *src, unsigned int n);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen_recursion(char *s);
#endif
