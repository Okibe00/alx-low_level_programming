#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* Return: always zero
* description: print positive negative or zero
* betty style doc for function main goes there
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
