#include "main.h"

/**
  * alloc_grid - creates a 2-D array
  * @width: number of item in sub array
  * @height: number of subarray
  * description: creates a 2-D array of ints
  * Return: pointer to 2-D array
*/


int **alloc_grid(int width, int height)
{
	int  **ptr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			k = 0;
			while (k <= i)
			{
				free(ptr[k]);
				k++;
			}
			free(ptr);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
