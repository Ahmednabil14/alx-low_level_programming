#include <stdio.h>
#include "main.h"
/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
