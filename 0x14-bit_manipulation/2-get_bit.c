#include "main.h"

/**
  * get_bit - returns the value of bit at an index
  * @n: number
  * @index: index to return
  * description: The function gets the value of a bit at an index
  * Return: value at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 1;
	if (index > 63)
		return (-1);
	i = i << index;
	if (n & i)
		return (1);
	else
		return (0);
}
