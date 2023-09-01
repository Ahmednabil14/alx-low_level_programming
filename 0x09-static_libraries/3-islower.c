#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: character
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
