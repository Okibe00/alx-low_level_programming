
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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}


