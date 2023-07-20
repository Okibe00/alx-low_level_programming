#include "variadic_functions.h"

/**
  * print_strings - print strings passed
  * @separator: string separator
  * @n: number of arguments
  * description: printsstrings passed to the function
  * Return: nothing
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (separator == NULL)
		{
			if (ptr == NULL)
				printf("(nil)");
			else
				printf("%s", ptr);
		}
		else
		{
			if (i == n - 1)
			{
				if (ptr == NULL)
					printf("(nil)");
				else
					printf("%s", ptr);
			}
			else
			{
				if (ptr == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", ptr, separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
