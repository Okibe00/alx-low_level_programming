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
			if (check_d(argv[i]) == 0)
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
/**
  * check_d - checks for non digits in string
  * @s: string
  * description: checks string for non digit
  * Return: 1 or 0
*/
int check_d(char *s)
{
	char *ptr;
	int i;

	ptr = s;
	i = 0;
	while (*ptr)
	{
		if (atoi(ptr) == 0 && *ptr  != '0')
		{
			return (0);
		}
		i++;
		ptr++;
	}
	return (1);
}
