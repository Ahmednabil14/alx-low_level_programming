#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - function that splits a string into words.
 * @str: the string
 * Return: the split string
 */
char **strtow(char *str)
{
	char **p;
	int c = 0;
	size_t i;

	if (str == NULL  || *str == '\0')
	{
		return (NULL);
	}
	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (str[i] != ' ')
		{
			c++;
		}
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			c++;
		}
	}
	p = (char **) malloc(c * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
