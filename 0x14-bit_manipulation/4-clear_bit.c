#include "main.h"
/**
  * clear_bit - turns off a bit at an index
  * @n: pointer to the integer whose bit will be manipulated
  * @index: index to be manipulated
  * description: sets the value of a bit to 0 at a given index
  * Return: 1(success) 0(failure)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1;
	if (n == NULL || index > 63)
		return (-1);
	*n = *n & (~(i << index));
	return (1);
}
