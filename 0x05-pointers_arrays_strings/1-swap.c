/**
* swap_int - swaps the value of passed int using pointers
* @a: first int value
* @b: second int value
* description: the funtion below changes the value of two ints
*/



void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
