#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program
 *
 * Return: 0 (Success);
 */
int main(void)
{
	int i;
	time_t t;

	srand((unsigned int) time(&t));

	for (i = 0 ; i <= 14 ; i++)
	{
		printf("%c", rand() % 128);
	}
	printf("\n");
	return (0);
}
