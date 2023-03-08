#include "main.h"
/**
* print_chessboard - prnt the chess B
* @a: array
* description: prints the chess baord
* Return: 0
*/



void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
