#include "main.h"
/**
 * get_endianness - function that checks if machine is little or big Endian
 * Return: void
 */
int get_endianness(void)
{
	unsigned int test = 0x12547314;
	char *c = (char *) &test;

	if (*c == 0x12)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
