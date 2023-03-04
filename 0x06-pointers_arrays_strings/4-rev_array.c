/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * description: reverses an array
 * Return: nothing.
 */


void reverse_array(int *a, int n)
{
	int temp;
	int m = (n - 1) / 2;
	int l = n - 1;
	int i = 0;

	while (i < m)
	{
		temp = a[i];
		a[i] = a[l - i];
		a[l - i] = temp;
		i++;
	}
}
