#include "main.h"
/**
 * strstr - function that locates a substring.
 * @haystack: tsring
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = haystack;

	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				return (s);
			}
			needle++;
		}
		haystack++;
	}
	return ('\0');
}
