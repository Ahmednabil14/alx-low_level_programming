#include "lists.h"
void __attribute__((constructor)) hare(void);

/**
 * hare - function that print string before the main
 * Return: void
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	      "I bore my house upon my back!\n");
}
