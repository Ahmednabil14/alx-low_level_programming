#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int x = 612852475143;
	int i, j, counter;
	counter = 0;

	for (i = 2 ; i <= x/2 ; i++)
	{
	        for (j = 1 ; j <= x/2 ; j++)
		{
			if (i % j == 0)
			{
				counter++;
			}
		}
		if (counter == 2)
		{
			printf("%d",i);
		}
	}
	return (0);
}
