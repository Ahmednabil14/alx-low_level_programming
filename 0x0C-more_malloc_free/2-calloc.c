#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: size of the array
 * @size: number of bytes
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc((nmemb * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size ; i++)
	{
		p[i] = 0;
	}
	return (p);
}
