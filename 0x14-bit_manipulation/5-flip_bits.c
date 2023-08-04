#include "main.h"


/**
  * flip_bits - counts flips required
  * @n: integer
  * @m: integer
  * description: counts the number of flips required to get to from m to n
  * Return: number of flips
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip;
	unsigned int i;
	unsigned int index;

	flip = 0;
	i = 1;
	index = 0;
	while (n)
	{
		if (n & i)
		{
			if (check_bit(m, index) == 0)
				flip++;
		}
		else
		{
			if (check_bit(m, index) == 1)
				flip++;
		}
		index++;
		n = n >> 1;
	}
	return (flip);
}


/**
  * check_bit - checks if a  bit is set or not
  * @n: number
  * @index: index to test
  * description: checks if a bit at a location is set
  * Return: 1(set) 0(off)
*/
int check_bit(unsigned long int n, int index)
{
	unsigned long int i;

	i = 1;
	i = i << index;
		if (n & i)
			return (1);
		else
			return (0);
}
