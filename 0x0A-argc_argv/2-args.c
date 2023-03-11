#include <stdio.h>
#include "main.h"

/**
* main - entry point
* @argc: int
* @argv: string
* decription: prints all args
* Return: 0
*/
int main(int __attribute__((unused))argc, char __attribute__((unused)) *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
