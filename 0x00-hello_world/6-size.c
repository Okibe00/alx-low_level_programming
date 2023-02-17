#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char c;

	int i;

	long h;

	long long t;

	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));

	printf("Size of an int: %lu byte(s)\n", sizeof(i));

	printf("Size of a long int: %lu byte(s)\n", sizeof(h));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(t));

	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
