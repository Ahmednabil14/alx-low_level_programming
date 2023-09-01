#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of running files
 * @argv: array of string of files name when running
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
