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
			for (o = 1 ; o <= size ; o++)
			{
				if (o + i <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
