#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: separators betwen numbers
  * @n: number of ints passed
  * description: prints numbers passed
  * Return: nothing
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			if (i == n - 1)

				printf("%d", va_arg(args, int));
			else
				printf("%d%s", va_arg(args, int), separator);
		}
	}
	va_end(args);
	printf("\n");
}

