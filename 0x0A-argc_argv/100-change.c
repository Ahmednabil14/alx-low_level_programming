#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: number of running files
 * @argv: names of running files
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0, money = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (money >= coins[i])
			{
				j += money / coins[i];
				money = money % coins[i];
				if (money % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
