
#include "main.h"
/**
  * main - prints the args passed
  * @argc: argument count
  * @argv: argument vector
  * description: prints the args passed
  * Return: 0 success
*/


int main(int argc, char *argv[])
{
	int i;

	i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}


