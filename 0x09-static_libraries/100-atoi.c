#include <stdlib.h>
#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer of char variable
 * Return: int
 */
int _atoi(char *s)
{
	int x = 0, i;
	int c = 0;

	if (atoi(s) != 0)
	{
		return (atoi(s));
	}
	else
	{
		while (s[c] != '\0')
		{
			c++;
		}
		for (i = 0 ; i <= c ; i++)
		{
			if (*s >= '0' && *s <= '9')
			{
				x *= 10;
				x -= (s[i] - '0');
				s[i + 1] = x;
			}
		}
		return (x);
	}
}
