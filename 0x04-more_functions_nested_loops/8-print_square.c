#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
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
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
