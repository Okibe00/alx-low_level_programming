#include "dog.h"

/**
  * init_dog - initialize dog
  * @name: name of dog;
  * @age: age of dog
  * @owner: name of owner
  * @d: pointer to struct
  * description: initializes a dog struct
  * Return: nthing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
