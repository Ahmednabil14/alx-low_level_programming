#include "main.h"
/**
 * rev_string -  function that reverses a string.
 *
 * @s: address of character variable
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	for ( ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
