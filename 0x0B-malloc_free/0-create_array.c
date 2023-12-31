#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of array
 * @c: char
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size > 0)
	{
		p = (char *) malloc(size * sizeof(char));
		if (p == NULL)
		{
			return ('\0');
		}
		for (i = 0 ; i < size ; i++)
		{
			*(p + i) = c;
		}
		return (p);
	}
	else
	{
		return ('\0');
	}
	return (0);
	free(p);
}
