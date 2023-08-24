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
	while ((*s1 != '\0' || *s1 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
