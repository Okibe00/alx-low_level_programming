#include <stdio.h>
#include "search_algos.h"
/**
* linear_search - searches an array for an integer
* @array: array to search
* @size: size of the array
* @value: value to find in array
* description: search an array for a particular value
* Return: 1 or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	i = 0;
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
