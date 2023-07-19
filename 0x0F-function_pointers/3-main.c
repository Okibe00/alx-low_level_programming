#include "3-calc.h"
/**
  * main - calculates number
  * @argc: argument count
  * @argv: argumen vector
  * description: performs math operations on numbers
  * Return: 0 or 1
*/

int main(int argc, char *argv[])
{

	int (*ptr)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	res = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
