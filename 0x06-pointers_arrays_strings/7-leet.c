#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: string
 * Return: the new string
 */
char *leet(char *str)
{
	int i = 0, c;
	char a[] = "aeotl";
	char b[] = "43071";

	while (str[i] != '\0')
	{
		for (c = 0 ; c < 5 ; c++)
		{
			if (str[i] == a[c] || str[i] == a[c] - 32)
			{
				str[i] = b[c];
			}
		}
		i++;
	}
	return (str);
}
