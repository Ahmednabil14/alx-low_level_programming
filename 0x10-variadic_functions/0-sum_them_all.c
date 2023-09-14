#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of argument
 * Return: the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list list;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		result += va_arg(list, int);
	}
	va_end(list);
	return (result);
}
