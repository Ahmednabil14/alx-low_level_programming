#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: the original string
 * @c: char you want to print from
 * Return: the new pointer of the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
