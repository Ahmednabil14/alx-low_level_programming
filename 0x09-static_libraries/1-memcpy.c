#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer of char value
 * @src: pointer of char value
 * @n: numer of time copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
