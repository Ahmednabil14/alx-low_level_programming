#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,followed by a new line
 *
 * @s: address of chracter variable
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	for (; i >= 0 ; --i)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
