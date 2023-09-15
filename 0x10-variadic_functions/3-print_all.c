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
	size_t i = 0, j = 0;
	va_list list;
	char *arr = "cifs", *s;

	va_start(list, format);
	while (format[i])
	{
		size_t c = 0;

		while  (arr[c])
		{
			if (format[i] == arr[c] && j != 0)
			{
				printf(", ");
				break;
			} c++;
		}
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
			s = va_arg(list, char *), j = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(list);
}
