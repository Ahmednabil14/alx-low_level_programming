#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: the min number in the array
 * @max: the max number in the array
 * Retrun: pointer to rthe new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, val = min;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i <= max - min ; i++)
	{
		p[i] = val;
		val++;
	}
	return (p);
}
