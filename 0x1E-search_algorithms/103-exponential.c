#include "search_algos.h"
#include <math.h>
/**
 * binary - search in array using binary search algotithm
 * @array: the array you want search in
 * @low: the start of the array.
 * @size: the size of the array.
 * @value: value you search for
 * Return: the index of the value in array if success and -1 if fail
*/

int binary(int *array, size_t low, size_t size, int value)
{
	int l = low, r = size - 1;
	int i;

	if (!array)
		return (-1);
	while (l <= r)
	{
		int mid = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - search for value in array using exponential search
 * @array: the array you want search in
 * @size: the size of the array.
 * @value: value you search for
 * Return: the index of the value in array if success and -1 if fail
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, min;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < size)
		min = i + 1;
	else
		min = size;
	printf("Value found between indexes [%ld] and [%ld]\n", min / 2, min - 1);
	return (binary(array, min / 2, min, value));
}
