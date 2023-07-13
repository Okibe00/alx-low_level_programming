#include "main.h"
/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements
  * @size: size of each element
  * description: allocates memory for an array of nmemb
  * Return: pointer to array
*/




void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *temp;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = nmemb * size;
	j = 0;
	temp = (unsigned char *)ptr;
	while (j < i)
	{
		temp[j] = (unsigned char)0;
		j++;
	}
	return (ptr);
}

