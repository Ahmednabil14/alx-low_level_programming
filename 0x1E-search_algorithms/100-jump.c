#include "search_algos.h"
/**
 * jump_search - function that search for element using jump search algorithm.
 * @array: the array you want search in
 * @size: the size of the array.
 * @value: value you search for
 * Return: the index of the value in array if success and -1 if fail
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size - 1);
	size_t low = 0, high = jump;
	size_t i;

	if (!array)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	for (i = low; i < size && i <= high; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
