#include <stdio.h>
/**
 * natural -  prints the sum of all the multiples of 3 or 5 below 1024
 * @n: number
 * Return: void
 */
void natural(int n)
{
	int x, sum, i;

	for (i = 0 ; i < n ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			x = i;
			sum += x;
		}
	}
	printf("%d",sum);
	printf("\n");
}
