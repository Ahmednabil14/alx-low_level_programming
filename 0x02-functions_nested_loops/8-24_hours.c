#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int x, y, z, m;

	for (x = 0 ; x <= 2 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			if (x <= 1 || (x == 2 && y <= 3))
			{
				for (z = 0 ; z <= 5 ; z++)
				{
					for (m = 0 ; m <= 9 ; m++)
					{
						_putchar(48 + x);
						_putchar(48 + y);
						_putchar(':');
						_putchar(48 + z);
						_putchar(48 + m);
						_putchar('\n');
					}
				}
			}
		}
	}
}
