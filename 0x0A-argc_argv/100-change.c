#include "main.h"
/**
  * main - find the minimum number if coins for change
  * @argc: argument count
  * @argv: argument vector
  * description: returns the minimum numbr of coins needed for change
  * Return: num coins
*/

int main(int argc, char *argv[])
{
	long res;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = find_c(argv);
	}
	printf("%lu\n", res);
	return (0);
}
/**
  * find_c - prints change
  * @argv: change
  * description: find the minimum num of coins for change
  * Return: num coins
*/

int find_c(char **argv)
{
	int sum, i, len, coin, count, c;
	int arr[5] = {25, 10, 5, 2, 1};

	c = atoi(argv[1]);
	sum = 0;
	len = 5;
	count = 0;
	if (c <= 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			coin = arr[i];
			if (coin == c)
				return (1);
			if (coin > c)
			{
				continue;
			}
			else
			{
				while (sum < c)
				{
					sum += coin;
					count++;
					}
				if (sum > c)
				{
					sum -= coin;
					count--;
				}
			}
			if (sum == c)
				break;
		}
	}
	return (count);
}

