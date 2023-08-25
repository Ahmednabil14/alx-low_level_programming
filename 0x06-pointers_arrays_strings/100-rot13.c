#include "main.h"
/**
 * rot13 -  function that encodes a string using rot13.
 * @str: string
 * Return: root13 string
 */
char *rot13(char *str)
{
	int i = 0, c;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *new = str;

	while (str[i] != '\0')
	{
		for (c = 0; c <= 52 ; c++)
		{
			if (str[i] == a[c])
			{
				str[i] = b[c];
				break;
			}
		}
		i++;
	}
	return (new);
}
