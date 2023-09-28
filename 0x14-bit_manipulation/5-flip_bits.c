#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the number
 * @m: the second number
 * Return: number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		if (diff &  1)
		{
			i++;
		}
		diff = diff >> 1;
	}
	return (i);
}
