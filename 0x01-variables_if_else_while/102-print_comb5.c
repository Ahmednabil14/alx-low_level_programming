#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ;b++)
		{
			for (c = 0 ; c <= 9 ; c++)
			{
				for (d = 0 ; d <= 9 ; d++)
				{
					if ((d != 0 || c != 0) && (a != b || a != c || a != d) && (a != c || b != d))
					{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					putchar(',');
					putchar(' ');
					}
				}
			}
	        }
	}
	putchar('\n');
	return (0);
}
