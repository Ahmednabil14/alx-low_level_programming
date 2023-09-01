#include <string.h>
/**
 * _strncat -  function that concatenates two strings.
 * @dest: pointer of char variable
 * @src: pointer of char variable
 * @n: integer value
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
