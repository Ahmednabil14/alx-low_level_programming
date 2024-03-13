#include "search_algos.h"
/**
 * interpolation_search - search for value in array using interpolation search
 * @array: the array you want search in
 * @size: the size of the array.
 * @value: value you search for
 * Return: the index of the value in array if success and -1 if fail
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));

	if (!array)
		return (-1);
	while (pos <= size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value && array[pos - 1] != value)
		{
			return (pos);
		}
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
		{
			low = pos;
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
