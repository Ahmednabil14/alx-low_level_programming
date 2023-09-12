#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from, followed by a new
 *                       line
 * Return: 1 if success else return 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (1);
}
