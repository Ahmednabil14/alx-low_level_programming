#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: the array you want search in
 * @size: the size of the array.
 * @value: value you search for
 * Return: index of the value if succed and -1 if fail
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
