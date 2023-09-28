#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: the position
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (!n || index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
