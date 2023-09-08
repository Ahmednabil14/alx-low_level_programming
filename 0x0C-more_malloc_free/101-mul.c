#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplies two positive numbers.
 * @argv: number of argument
 * @argc: the argument
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		mul = atoi(argv[2]) * atoi(argv[3]);
		printf("%d", mul);
	}
	return (0);
}
