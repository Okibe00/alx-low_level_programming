#include "main.h"



/**
  * set_bit - sets the value of a bit to 1
  * @n: number
  * @index: index to set bit
  * description: sets the value of a bit to 1 at a given index
  * Return: 1(success) -1(failure)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1;
	if (n == NULL || index > 63)
		return (-1);
	i = i << index;
	*n = *n | i;
	if (*n)
		return (1);
	else
		return (-1);

}
