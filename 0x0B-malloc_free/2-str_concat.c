#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Retun: pointer of string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 1, c = 1;
	int x;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	while (*s1 != '\0')
	{
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		c++;
		s2++;
	}
	p = malloc(((c + i) * sizeof(char)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < i + c ; x++)
	{
		if (x < i)
		{
			p[x] = s1[x];
		}
		else
		{
			p[x] = s2[x - i];
		}
	}
	p[x] = '\0';
	return (p);
}
