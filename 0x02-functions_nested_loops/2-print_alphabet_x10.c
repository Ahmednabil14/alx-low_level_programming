#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
