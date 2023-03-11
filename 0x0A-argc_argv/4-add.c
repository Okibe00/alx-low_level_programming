#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - entry point
* @argc: int
* @argv: string
* decription: prints args sum
* Return: 0
*/
int main(int __attribute__((unused))argc, char __attribute__((unused)) *argv[])
{
	__attribute__((unused)) int sum = 0;
	__attribute__((unused)) int i = 1;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			__attribute__((unused)) size_t j = 0;

			while (j < strlen(argv[i]))
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
			j = 0;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
