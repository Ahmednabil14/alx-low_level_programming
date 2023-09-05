#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 *                                                  integer
 * @width: number of column
 * @height: number of rows
 * Return: pointer to a 2 dimensional
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		p[i] = malloc(width * sizeof(int));
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
	free (p);
}
