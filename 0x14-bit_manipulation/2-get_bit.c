#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: the position
 * Return: the bit in the position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, x = 0;

	for (i = 0 ; i <= index ; i++)
	{
		x = n / 2;
		if (i == index)
		{
			if (n % 2 == 0)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
		n = x;
	}
	return (-1);
}
