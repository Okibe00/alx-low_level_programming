#include "main.h"
/**
  * get_endianness - checks endianness
  * description: checks endianness
  * Return: nothing
*/


int get_endianness(void)
{
	int i;
	char *ptr;

	i = 1;
	ptr = (char *)&i;
	if (*ptr)
		return (1);
	else
		return (0);
}
