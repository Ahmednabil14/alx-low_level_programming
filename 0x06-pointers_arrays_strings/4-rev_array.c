#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer of int value
 * @n: is the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i ,c;

	for (i = 0 ; i < n-1 ; i++)
	{
		n--;
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
