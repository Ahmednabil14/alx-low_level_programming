#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_name - function that prints a name.
 * @name: the name
 * @f: function
 * Retrun: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
