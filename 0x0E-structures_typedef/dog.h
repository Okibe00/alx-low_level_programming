#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
  * struct dog - dog information
  * @name: name of dog
  * @age: age of dog
  * @owner: dog owner
  * description: holds dog information
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
