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
	long int x = 1;
	long int y = 1;
	long int sum = 0;

	for (i = 0 ; i <= 50 ; i++)
	{
		printf("%ld", x);
		sum = x + y;
		x = y;
		y = sum;
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
