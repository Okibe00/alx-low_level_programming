#include "main.h"
/**
  * malloc_checked - allocates memory
  * @b: size
  * description: allocates b bytes of memory
  * Return: pointer to memory block
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
	{
		exit(98);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
