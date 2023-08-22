#include <stdlib.h>
#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer of char variable
 * Return: int
 */
int _atoi(char *s)
{
	if (atoi(s) != '\0')
	{
		return (atoi(s));
	}
	else
	{
		return (0);
	}
}
