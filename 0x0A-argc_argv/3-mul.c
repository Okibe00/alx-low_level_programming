#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main - entry point
* @argc: int
* @argv: string
* decription: prints mul of args
* Return: 0
*/
int main(int __attribute__((unused))argc, char __attribute__((unused)) *argv[])
{
	int i = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
