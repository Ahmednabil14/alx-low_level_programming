#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: pointer contain a variable whose data type is char
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = 0 ; i < c ;)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
