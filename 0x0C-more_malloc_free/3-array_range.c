#include "main.h"


/**
  * array_range - creates an array of int
  * @min: min value
  * @max: max value
  * description: creates an array of int
  * Return: pointer to new array
*/


int *array_range(int min, int max)
{
	int num_elem, i, count;
	int *ptr;
	int *temp;

	if (min > max)
	{
		return (NULL);
	}
	num_elem = (max - min) - 1;
	ptr = malloc(sizeof(int) * (num_elem + 2));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	temp = ptr;
	count = num_elem + 1;
	for (i = 0; i <= count; i++)
	{
		temp[i] = min;
		min++;
	}
	return (ptr);
}
