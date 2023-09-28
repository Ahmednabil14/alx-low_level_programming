#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int x = 32768, v = 0;

	while (x > 0)
	{
		if (n == 0)
		{
			_putchar('0');
			break;
		}
		if (((x & n) == 0) && v == 1)
		{
			_putchar('0');
		}
		if ((x & n) != 0)
		{
			v = 1;
			_putchar('1');
		}
		x = x >> 1;
	}
}
