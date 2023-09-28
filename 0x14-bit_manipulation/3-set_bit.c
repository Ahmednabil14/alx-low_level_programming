#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the position
 * Return: 1 if success -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
