#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: the binary number
 * Return: the converted number (success) 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, i, j, sum = 1, n = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[count])
		count++;
	j = count - 1;
	for (i = 0 ; i < count ; i++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '0' || b[j] == '1')
		{
			if (i > 0)
				sum = sum * 2;
			if (b[j] == '0')
			{
				j--;
			}
			else
			{
				n += sum;
				j--;
			}
		}
	}
	return (n);
}
