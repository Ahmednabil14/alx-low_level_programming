#include "search_algos.h"
/**
 * advanced_binary - search in array using binary search algotithm
 * @array: the array you want search in
 * @size: the size of the array.
 * @value: value you search for
 * Return: the index of the value in array if success and -1 if fail
*/

int advanced_binary(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;
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

		if (array[mid] == value && array[mid - 1] != value)
		{
			return (mid);
		}
		else if (value < array[mid] || array[mid - 1] == value)
		{
			r = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
