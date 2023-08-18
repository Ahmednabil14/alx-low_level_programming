#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (o = size - 1 ; o > 1 ; o--)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
		_putchar('\n');

	}
}
