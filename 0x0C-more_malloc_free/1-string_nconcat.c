#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes that will be token from s2
 * Return: the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int c = strlen(s1), i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc(((c + n) * sizeof(char)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < n + c ; i++)
	{
		if (i < c)
		{
			p[i] = s1[i];
		}
		else
		{
			if (i <= c + strlen(s2))
			{
				p[i] = s2[i - c];
			}
			else
			{
				p[i] = '\0';
			}
		}
	}
	p[i] = '\0';
	return (p);
}
