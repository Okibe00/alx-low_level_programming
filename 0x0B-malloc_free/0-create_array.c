#include "main.h"


/**
  * create_array - creates an array using malloc
  * @size: size of array
  * @c: initializing character
  * description: create an array using maloc
  * Return: pointer to new mem location
*/



char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	n = 0;
	if (size <= 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
		return (NULL);
	while (n < size)
	{
		ptr[n] = c;
		n++;
	}
	return (ptr);
}
