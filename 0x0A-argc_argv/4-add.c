#include "main.h"
/**
  * main - printd progam name
  * @argc: argument count
  * @argv: argument vector
  * description: prints the name of the program
  * Return: 0 success
*/


int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);

	}
	return (0);
}


