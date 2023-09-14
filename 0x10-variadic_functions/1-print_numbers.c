#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the separator
 * @n: the number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(list);
}
