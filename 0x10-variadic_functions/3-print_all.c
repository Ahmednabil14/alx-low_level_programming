#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 * print_all - function that prints anything.
 * @format: the argument data type
 * Return: void
 */
void print_all(const char * const format, ...)
{
	size_t i = 0;
	size_t j = 0;
	va_list list;
	char *s;

	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int)), j = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), j = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), j = 1;
			break;
		case 's':
			s = va_arg(list, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			j = 1;
			break;
		}
		if (j == 1 && (format[i] == 'c' ||
			       format[i] == 'i'
			       || format[i] == 'f' ||
			       format[i] == 's'))
		{
			printf(", ");
		}
		i++;
		j = 0;
	}
	printf("\n");
}
