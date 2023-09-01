#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of file running
 * @argv: array of string value of file running
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc-1);
	return (0);
}
