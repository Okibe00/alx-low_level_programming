#include "dog.h"

/**
  * free_dog - free dog
  * @d: ptr
  * description: free dog
  * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
