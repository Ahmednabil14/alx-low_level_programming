#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string
 * Return: uppercas
 */
char *cap_string(char *str)
{
	int i = 1;

	while (str[i] != '\0')
	{
		if ((str[i - 1] == ',' ||
		     str[i - 1] == '.' ||
		     str[i - 1] == ';' ||
		     str[i - 1] == '!' ||
		     str[i - 1] == '?' ||
		     str[i - 1] == '"' ||
		     str[i - 1] == '(' ||
		     str[i - 1] == ')' ||
		     str[i - 1] == ' ' ||
		     str[i - 1] == '{' ||
		     str[i - 1] == '}' ||
		     str[i - 1] == '?' ||
		     str[i - 1] == '\n' ||
		     str[i - 1] == '\t') &&
		    (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
