#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0 the function should not
 * print anything
 * @n: times table
 * Return: void
 */
void print_times_table(int n)
{
	int num, mul, res;

	if (n <= 15 && n >= 0)
	{
		for (num = 0 ; num <= n ; num++)
		{
			_putchar('0');
			for (mul = 1 ; mul <= n ; mul++)
			{
				_putchar(',');
				_putchar(' ');
				res = num * mul;
				if (res <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + res);
				}
				else if (res <= 99)
				{
					_putchar(' ');
					_putchar((res / 10) + 48);
					_putchar((res % 10) + 48);
				}
				else
				{
					_putchar((res / 100) + 48);
					_putchar((res / 10) % 10 + 48);
					_putchar((res % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
