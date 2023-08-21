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
	int c;
	char prn;

	while (s[i] != 0)
	{
		i++;
	}
	for (c = 0 ; c<= i ; c++)
	{
		i--;
		prn = s[i];
		s[c] = s[i];
		s[i] = prn;
	}
	_putchar('\n');
}
