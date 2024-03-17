#include "search_algos.h"
/**
 * binary_search - search for a value using the binary search algo
 * @array:array to search
 * @size: size of the array
 * @value: value to search for
 * description: search for an element in an array
 * Return: index of element or -1
*/


int binary_search(int *array, size_t size, int value)
{
	int start, end, mid;

	start = 0;
	end = size - 1;
	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		print_array(array, start, end);
		mid = ((start + end) / 2);
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
/**
 * print_array - print the array passed
 * @array: array to be printed
 * @start: start index of array
 * @end: end index of array
 * description: prints an array
 * Return: nothing
*/

void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%d, ", array[start]);
		start++;
	}

	printf("%d\n", array[end]);
}
