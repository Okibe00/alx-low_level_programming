#include "variadic_functions.h"
/**
  * print_all - prints to stdout
  * @format: format string
  * description: prints format string to stdout
  * Return: nothing
*/



void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char  *str;

	i = 0;
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c' ||
				format[i] == 'i'
				|| format[i] == 'f' || format[i] == 's')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					_prints(str);
			}
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
/**
  * _prints - prints to stdout
  * @s: string
  * description: prints format string to stdout
  * Return: nothing
*/
void _prints(char *s)
{
	switch (s == NULL)
	{
		case 1:
			printf("(nil)");
			break;
		default:
			printf("%s", s);
	}
}

