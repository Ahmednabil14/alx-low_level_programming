#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers.
 * @a: pinter of a variable whose data type is integer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
