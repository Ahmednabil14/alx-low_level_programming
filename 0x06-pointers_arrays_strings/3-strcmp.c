#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: secong string
 * Return: 0 if they are the same
 * - if asci of the character of s1 < s2
 * + if asci of the character of s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int x;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{

		if (s1[i] == s2[i])
		{
			x = 0;
		}
		else
		{
			x = (*s1 - *s2);
			break;
		}
	}
	return (x);
}
