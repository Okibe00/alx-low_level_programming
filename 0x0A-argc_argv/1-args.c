#include <stdio.h>
#include "main.h"

/**
* main - entry point
* @argc: int
* @argv: string
* decription: prints num of args
* Return: 0
*/
int main(int __attribute__((unused))argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
