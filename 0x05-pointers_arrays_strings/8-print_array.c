#include <stdio.h>
/**
* print_array - prnts n elems of an arr of int
* @n: num of elem of the arr to be printed
* @a: arr
* description: prints n elem from an array
*/


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			break;
			i++;
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
