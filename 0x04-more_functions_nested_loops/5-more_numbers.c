#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n <= 9)
			{
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
		}
		_putchar('\n');
	}
}
