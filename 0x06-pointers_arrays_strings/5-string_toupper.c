#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 * @str: string
 * Return: pointer of array of uppercase
 */
char *string_toupper(char *str)
{

	while (*str != '\0')
	{
		if (*str > 96 && *str < 123)
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}
