#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		if (n <= 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
