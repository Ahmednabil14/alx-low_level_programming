#include "main.h"
#include <stdio.h>
/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int x = 1;
	int y = 1;
	int sum = 0;

	for (i = 0 ; i <= 20 ; i++)
	{
		if (x <= 50)
		{
			printf("%d", x);
			sum = x + y;
			x = y;
			y = sum;
			if (x != 55)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
