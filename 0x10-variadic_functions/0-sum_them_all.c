#include "variadic_functions.h"
/**
  * sum_them_all - sum all parameter
  * @n: num of parameter
  * description: sum all parameter passed
  * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	/*check if n <= 0*/
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);
	sum = 0;
	if (n <= 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
