#include "search_algos.h"
/**
 * binary_search - search in array using binary search algotithm
 * @array: the array you want search in
 * @size: the size of the array.
 * @value: value you search for
 * Return: the index of the value in array if success and -1 if fail
*/

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;
	int i;

	while (l <= r)
	{
		int mid = (l + r) / 2;

		printf("Searching in array:");
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
