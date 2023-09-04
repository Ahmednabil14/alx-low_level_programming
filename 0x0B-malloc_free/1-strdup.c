#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int c = 0, i;
	char *p;

	if (str == NULL)
	{
		return ('\0');
	}
	while (str[c] != '\0')
	{
		c++;
	}
	c++;
	p = (char *) malloc(c * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < c ; i++)
	{
		*(p + i) = str[i];
	}
	return (p);
	free(p);
}
