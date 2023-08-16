#include "main.h"
#include <stdio.h>
/**
 * main - calculate the sum o fibonacci
 *
 * Return: void
 */
int main(void)
{
	int i;
	long int x = 1;
	long int y = 2;
	long int sum = 0;
	long int suum = 0;

	for (i = 0 ; x <= 4000000 ; i++)
	{
		if (x % 2 == 0)
		{
			suum += x;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld", suum);
	printf("\n");
	return (0);
}
