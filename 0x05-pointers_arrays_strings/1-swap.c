#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: address of integer value
 * @b: address of integer value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
