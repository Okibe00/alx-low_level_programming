#include "function_pointers.h"

/**
  * array_iterator - prints the elements of an array
  * @array: array
  * @size: size of array
  * @action: function pointer
  * description: prints the elements of an array
  * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	/*check for errors*/
	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
